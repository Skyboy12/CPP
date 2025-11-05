#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        auto it = find(a.begin(), a.end(), k);
        if(it != a.end()) {
            int pos = it - a.begin();
            cout << pos + 1 << "\n";
        }
        else cout << "-1\n";
    }
    return 0;
}