#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        long long max_n,min_m;
        cin >> max_n;
        n--;
        while(n--){
            long long temp;
            cin >> temp;
            max_n = max(max_n,temp);
        }
        cin >> min_m;
        m--;
        while(m--){
            long long temp;
            cin >> temp;
            min_m = min(min_m,temp);
        }
        long long ans = max_n * min_m;
        cout << ans << "\n";
    }
    return 0;
}