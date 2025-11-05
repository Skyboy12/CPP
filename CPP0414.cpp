#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end(), cmp);
        for (int l = 0, r = n - 1; l <= r; l++, r--){
            if (l == r) cout << a[l] << " ";
            else cout << a[l] << " " << a[r] << " ";
        }
        cout << "\n";
    }
    return 0;
}