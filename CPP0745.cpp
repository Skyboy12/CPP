#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        istringstream ss(s);
        vector<string> tokens;
        string token;
        while (ss >> token) tokens.push_back(token);
        reverse(tokens.begin(), tokens.end());
        for (auto x : tokens) cout << x << " ";
        cout << "\n";
    }
    return 0;
}