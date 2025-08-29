#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, q;
        cin >> n >> q;
        vector<int> f(n+1);
        f[0] = {0};
        for (int i = 1; i <=n; i++){
            int temp;
            cin >> temp;
            f[i] = f[i-1] + temp;
        }
        while (q--){
            int l, r;
            cin >> l >> r;
            cout << f[r] - f[l-1] << endl;
        }
    }
    return 0;
}