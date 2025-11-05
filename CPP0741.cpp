#include <bits/stdc++.h>
using namespace std;

void newdigits(int olddigits, vector<int> &digitslist){
    if (olddigits < 2) return;
    switch (olddigits){
        case 2: digitslist.push_back(2); break;
        case 3: digitslist.push_back(3); break;
        case 4: digitslist.push_back(3); digitslist.push_back(2); digitslist.push_back(2); break;
        case 5: digitslist.push_back(5); break;
        case 6: digitslist.push_back(5); digitslist.push_back(3); break;
        case 7: digitslist.push_back(7); break;
        case 8: digitslist.push_back(7); digitslist.push_back(2); digitslist.push_back(2); digitslist.push_back(2); break;
        case 9: digitslist.push_back(7); digitslist.push_back(3); digitslist.push_back(3); digitslist.push_back(2); break;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> digitslist;
        for (auto c : s){
            int olddigits = c - '0';
            newdigits(olddigits, digitslist);
        }
        sort(digitslist.rbegin(), digitslist.rend());
        for (auto x : digitslist) cout << x;
        cout << "\n";
    }
    return 0;
}