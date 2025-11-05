#include <bits/stdc++.h>
using namespace std;

long long mod_solve(long long x, long long y, long long p){
    if (y == 0) return 1 % p;
    if (y == 1) return x % p;
    long long half = mod_solve(x, y / 2, p);
    if (y % 2 == 0) return (half * half) % p;
    else return (((half * half) % p) * (x % p)) % p;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, p;
        cin >> x >> y >> p;
        cout << mod_solve(x, y, p) << "\n";
    }
    return 0;
}