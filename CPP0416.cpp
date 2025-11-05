#include <bits/stdc++.h>

using namespace std;

const int limit = 1e8;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        long long max_a = -limit, min_b = limit;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            max_a = max(max_a, (long long)a);
        }
        for (int i = 0; i < m; i++){
            int b; cin >> b;
            min_b = min(min_b, (long long)b);
        }
        cout << max_a * min_b << "\n";
    }
    return 0;
}