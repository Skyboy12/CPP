#include <iostream>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long rvs = 0;
    while (n > 0){
        if (n % 1000 == 84){
            n /= 1000;
        }
        rvs = rvs * 10 + n % 10;
        n /= 10;
    }
    long long ans = 0;
    while (rvs > 0){
        ans = ans * 10 + rvs % 10;
        rvs /= 10;
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}