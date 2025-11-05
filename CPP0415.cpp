#include <bits/stdc++.h>

using namespace std;

bool digit_used[10];

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        memset(digit_used, false, sizeof(digit_used));
        for (int i = 0; i < n; i++){
            string s; cin >> s;
            for (char c : s){
                if (isdigit(c)){
                    digit_used[c - '0'] = true;
                }
            }
        }
        for (int i = 0; i < 10; i++){
            if (digit_used[i]){
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}