#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int count = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if (a == x) count++;
        }
        if (!count) cout << -1 << endl;
        else cout << count << endl;
    }
    return 0;
}