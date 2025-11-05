#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int digit_sum = 0;
    int size = s.size();
    for(int i = 0; i < size / 2; i++){
        if (s[i] != s[size - i - 1]) return false;
        digit_sum += (s[i] - '0') * 2;
    }
    if (size % 2 != 0) digit_sum += (s[size / 2] - '0');
    return (digit_sum % 10 == 0);
}

int main(){
    string s;
    cin >> s;
    if (check(s)) cout << "YES";
    else cout << "NO";
}