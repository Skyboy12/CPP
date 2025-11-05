#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        while(str.length() > 0){
            char current = str.front();
            int current_length = str.length();
            str.erase(remove(str.begin(), str.end(), current), str.end());
            int new_length = str.length();
            if (new_length + 1 == current_length){
                cout << current;
            }
        }
        cout << endl;
    }
}