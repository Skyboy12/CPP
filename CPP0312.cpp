#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        int k;
        cin >> s >> k;
        int str_length = s.length();
        int dif_char_count = 0;
        while(s.length() > 0){
            s.erase(remove(s.begin(), s.end(), s.front()), s.end());
            dif_char_count++;
        }

        if((dif_char_count == 26) || ((dif_char_count + k >= 26) && (str_length >= 26))) cout << 1 << endl;
        else cout << 0 << endl;
    }
}