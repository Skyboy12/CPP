#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    string need_remove;
    getline(cin, input);
    getline(cin, need_remove);
    istringstream iss(input);
    vector<string> names_element;
    string name;
    while (iss >> name) {
        names_element.push_back(name);
    }
    remove(names_element.begin(), names_element.end(), need_remove);
    for (int i = 0; i < names_element.size() - 1; i++) {
        cout << names_element[i];
        if (i < names_element.size() - 2) {
            cout << " ";
        }
    }
    return 0;
}