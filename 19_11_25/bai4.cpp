#include <bits/stdc++.h>
using namespace std;

int div_number(int x){
    if (x%2 == 1) return 0;
    return 1 + div_number(x / 2);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int w, h, n;
        cin >> w >> h >> n;
        int total_bin = div_number(w) + div_number(h);
        int total = 1;
        while(total_bin--) total*=2;
        if (total < n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}