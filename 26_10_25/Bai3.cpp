#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    s[0] = tolower(s[0]);
    if(!(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'))
        return false;
    return s.length() >= 3;
}

int main() {
    string input;
    getline(cin, input);
    istringstream ss(input);
    string word;
    int count = 0;
    while (ss >> word) {
        if (check(word)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}