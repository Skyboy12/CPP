#include <bits/stdc++.h>

using namespace std;

void processing(string name_element){
    cout << char(toupper(name_element[0]));
    for (int i = 1; i < name_element.size(); i++) {
        cout << char(tolower(name_element[i]));
    }
}

int main(){
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<string> names_element;
    string name;
    while (iss >> name) {
        if (!name.empty()) {
            names_element.push_back(name);
        }
    }
    string last_name = names_element.back();
    remove(names_element.begin(), names_element.end(), last_name);
    for (int i = 0; i < names_element.size() - 1; i++) {
        processing(names_element[i]);
        if (i < names_element.size() - 2) {
            cout << " ";
        } else {
            cout << ", ";
        }
    }
    transform(last_name.begin(), last_name.end(), last_name.begin(), ::toupper);
    cout << last_name;
    return 0;
}