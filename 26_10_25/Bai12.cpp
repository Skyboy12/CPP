#include <bits/stdc++.h>
using namespace std;

void reformat_sentence(string &s){
    while (!s.empty() && s.front() == ' ') {
        s.erase(s.begin());
    }
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }
    stringstream ss(s);
    string word, result;
    ss >> word;
    word[0] = toupper(word[0]);
    for (size_t i = 1; i < word.size(); i++) {
        word[i] = tolower(word[i]);
    }
    result += word;
    while (ss >> word) {
        if (!result.empty()) {
            result += ' ';
        }
        for (size_t i = 0; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        result += word;
    }
    s = result;
}

vector<string> extract_sentences(const string &text) {
    vector<string> sentences;
    string current_sentence;
    for (char ch : text) {
        if (ch == '.' || ch == '!' || ch == '?') {
            reformat_sentence(current_sentence);
            sentences.push_back(current_sentence);
            current_sentence.clear();
        } else {
            current_sentence += ch;
        }
    }
    if (!current_sentence.empty()) {
        reformat_sentence(current_sentence);
        sentences.push_back(current_sentence);
    }
    return sentences;
}

int main(){
    string tmp, input;
    input = "";
    while (getline(cin, tmp)) {
        input += tmp + ' ';
    }
    vector<string> sentences = extract_sentences(input);
    for (const string &sentence : sentences) {
        cout << sentence << endl;
    }
    return 0;
}