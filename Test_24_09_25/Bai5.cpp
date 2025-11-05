#include <bits/stdc++.h>

using namespace std;

int main(){
    int lines;
    cin >> lines;
    cin.ignore();
    vector<string> poem_sentence(lines);
    for(int i = 0; i < lines; i++){
        getline(cin, poem_sentence[i]);
    }
    int count_type = 0;
    vector<int> poem_type;
    int current_type = 0;
    int current_line = 0;
    for(int i = 0; i < lines; i++){
        istringstream iss(poem_sentence[i]);
        string word;
        int word_count = 0;
        while(iss >> word){
            word_count++;
        }
        if(i == 0){
            if (word_count % 2 == 0){
                current_type = 1;
            } else {
                current_type = 2;
            }
        }
        if (word_count % 2 == 0){
            if (current_type != 1){
                current_type = 1;
                count_type++;
            }
        } else {
            if (current_type != 2){
                current_type = 2;
                count_type++;
            }
        }
        current_line++;
    }

    
}