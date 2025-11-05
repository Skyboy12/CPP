#include <bits/stdc++.h>
using namespace std;

bool isdividedby11(string s){
    int sum_odd = 0, sum_even = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0) sum_odd += (s[i] - '0');
        else sum_even += (s[i] - '0');
    }
    int diff = abs(sum_odd - sum_even);
    return diff % 11 == 0;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        if(isdividedby11(s)){
            cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
    return 0;
}