#include <bits/stdc++.h>
using namespace std;

bool isipv4(string s) {
    int dots = 0;
    stringstream ss(s);
    string segment;
    while (getline(ss, segment, '.')) {
        if (segment.empty() || segment.length() > 3) return false;
        for (char c : segment) {
            if (!isdigit(c)) return false;
        }
        int num = stoi(segment);
        if (num < 0 || num > 255) return false;
        if (segment[0] == '0' && segment.length() > 1) return false;
        dots++;
    }
    return dots == 4;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string ip;
        getline(cin, ip);
        if(isipv4(ip)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}