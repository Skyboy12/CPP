#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        int l = 0, r = n - 1;
        int ans = a[l] + a[r];
        while(l < r){
            if(abs(a[l] + a[r]) < abs(ans)){
                ans = a[l] + a[r];
            }
            if(a[l] + a[r] > 0){
                r--;
            } else if (a[l] + a[r] < 0){
                l++;
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}