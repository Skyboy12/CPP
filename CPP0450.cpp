#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> f(1000000, 0);
        vector<int> a;
        bool check = false;
        int res = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if (!check) {
                if(f[x] == 0) {
                    f[x]++;
                    a.push_back(x);
                } else {
                    check = true;
                    res = x;
                }
            }
        }
        if (check) {
            cout << res << "\n";
        } else {
            cout << -1 << "\n";
        }
        for (int i = 0; i < a.size(); i++) {
            f[a[i]] = 0;
        }
    }
    return 0;
}