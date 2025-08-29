#include <bits/stdc++.h>

using namespace std;

bool check(string str){
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 - i] || str[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    while (n--){
        string str;
        cin >> str;
        if (check(str)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}