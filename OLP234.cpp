#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += (long long)a[i] * ((2 * i) - n + 1);
    }
    cout << sum << "\n";
    return 0;
}