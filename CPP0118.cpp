#include <bits/stdc++.h>
using namespace std;

bool is_sphenic(int n) {
    if (n < 30) return false;    
    int count = 0;
    for (int i = 2; i * i <= n && count <= 3; ++i) {
        if (n % i == 0) {
            count++;
            n /= i;
            if (n % i == 0) return false;
        }
    }
    if (n > 1) count++;

    return count == 3;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << (is_sphenic(n) ? "1" : "0") << "\n";
    }
    return 0;
}