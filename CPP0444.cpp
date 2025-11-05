#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n-1);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if (i + 1 < a[i]) {
                cout << i + 1 << "\n";
                break;
            } else if (i == n - 1) cout << n + 1 << "\n";
        }

    }
    return 0;
}