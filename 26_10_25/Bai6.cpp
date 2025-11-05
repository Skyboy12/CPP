#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int *n = new int; cin >> *n;
        int *a = new int[*n];
        for(int i = 0; i < *n; i++) cin >> a[i];
        sort(a, a + *n);
        int minDiff = INT_MAX;
        for(int i = 1; i < *n; i++){
            minDiff = min(minDiff, a[i] - a[i - 1]);
        }
        cout << minDiff << endl;
        delete n;
        delete[] a;
    }
    return 0;
}