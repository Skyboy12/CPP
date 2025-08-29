#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin,input);
    istringstream iss(input);
    vector<string> names_element;
    string name;
    while (iss >> name) {
        names_element.push_back(name);
    }
    string last_name = names_element.back();
    remove(names_element.begin(), names_element.end(), last_name);
    transform(last_name.begin(), last_name.end(), last_name.begin(), ::tolower);
    cout << last_name;
    for (int i = 0; i < names_element.size() - 1; i++) {
        cout << char(tolower(names_element[i][0]));
    }
    cout << "@ptit.edu.vn";
    return 0;
}