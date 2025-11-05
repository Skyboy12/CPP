#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        int L = a.front(), R = a.back();
        cout << R - L + 1 - a.size() << "\n";
    }
    return 0;
}