#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        int mindif = a[1] - a[0];
        for(int i = 2; i < n; i++){
            mindif = min(mindif, a[i] - a[i - 1]);
        }
        cout << mindif << "\n";
    }
    return 0;
}