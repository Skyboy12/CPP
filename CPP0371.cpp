#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = 0;
        while(i < s.size()){
            char curr = s[i];
            int count = 0;
            while(i < s.size() && s[i] == curr){
                count++;
                i++;
            }
            cout << curr << count;
        }
        cout << "\n";
    }
    return 0;
}