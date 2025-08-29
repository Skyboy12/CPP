#include <bits/stdc++.h>

using namespace std;

char blacklist[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

int main(){
    string s;
    getline(cin, s);
    for (char &c : s) {
        if (find(begin(blacklist), end(blacklist), c) == end(blacklist)) {
            cout << "." << char(tolower(c));
        }
    }
    cout << "\n";
    return 0;
}