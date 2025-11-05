#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        bool check = true;
        for (char &c : s) {
            if (!(c == '0' || c == '6' || c == '8')) {
                check = false;
            }
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}