#include <bits/stdc++.h>
using namespace std;

bool is_ipv4(const string &s){
    int dots = 0;
    for(char c : s){
        if (c == '.') dots++;
        else if (!isdigit(c)) return false;
    }
    if (dots != 3) return false;

    stringstream ss(s);
    string segment;
    while(getline(ss, segment, '.')){
        if (segment.empty() || segment.size() > 3) return false;
        if (segment[0] == '0' && segment.size() > 1) return false;
        for(char c : segment){
            if (!isdigit(c)) return false;
        }
        int num = stoi(segment);
        if (num < 0 || num > 255) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        if (is_ipv4(s)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}