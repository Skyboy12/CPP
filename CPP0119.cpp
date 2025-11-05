#include <bits/stdc++.h>
using namespace std;

int count_divisors_2(int n) {
    if (n%2 != 0) return 0;
    int count = 0;
    for (int i = 1; i * i <= n / 2; ++i) {
        if (n % (2 * i) == 0) {
            count++;
            if (i * i != n / 2) count++;
        }
    }
    return count;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << count_divisors_2(n) << "\n";
    }
    return 0;
}