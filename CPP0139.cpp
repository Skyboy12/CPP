#include <bits/stdc++.h>

using namespace std;


int main(){
    int m,s;
    cin >> m >> s;
    string max = "",min = "";
    if (m * 9 < s || (s == 0 && m > 1)) {
        cout << "-1 -1" << endl;
        return 0;
    }
    while (m--){
        if (s > 9) {
            max += '9';
            s -= 9;
        } else {
            max += (s + '0');
            s = 0;
        }
    }
    for (char c : max){
        min = c + min;
    }
    if (min[0] == '0'){
        min[0] = '1';
        for (int i = 1; i < min.length(); i++){
            if (min[i] != '0') {
                min[i]--;
                break;
            }
        }
    }
    cout << min << " " << max << endl;
}