#include <bits/stdc++.h>
using namespace std;

struct data_list {
    string question_topic;
    int number_of_questions;
};

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<data_list> topics;
    vector<string> input_lines;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        input_lines.push_back(line);
    }
    int i = 0;
    while (i < n) {
        int j = i + 1;
        while (j < n && input_lines[j] != "") {
            j++;
        }
        data_list topic;
        topic.question_topic = input_lines[i];
        topic.number_of_questions = j - i - 1;
        topics.push_back(topic);
        i = j + 1;
    }
    for (const auto& topic : topics) {
        cout << topic.question_topic << ": " << topic.number_of_questions << endl;
    }
    return 0;
}