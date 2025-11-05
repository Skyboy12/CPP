#include <bits/stdc++.h>
using namespace std;

void gen_LPS(const string &pattern, vector<int> &lps) {
    int length = 0;
    lps[0] = 0;
    int i = 1;
    while (i < pattern.size()) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}
vector<int> KMP_search(const string &text, const string &pattern) {
    vector<int> lps(pattern.size());
    gen_LPS(pattern, lps);
    vector<int> occurrences;
    int i = 0, j = 0;
    while (i < text.size()) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == pattern.size()) {
            occurrences.push_back(i - j);
            j = lps[j - 1];
        } else if (i < text.size() && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return occurrences;
}
int main(){
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    vector<int> result = KMP_search(text, pattern);
    for (int i : result) {
        cout << i + 1 << " ";
    }
    return 0;
}