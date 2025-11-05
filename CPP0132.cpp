#include <iostream>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long max = 1;
    if (n % 2 == 0) max = 2;
    while (n % 2 == 0) n/=2;
    for (long long i = 3; i*i <=n; i++){
        if (n % i == 0) max = i;
        while (n % i == 0) n/=i;
    }
    if (n != 1) max = n;
    
    cout << max << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}