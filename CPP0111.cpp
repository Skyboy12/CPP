#include <iostream>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long last_digit = n % 10;
    n /= 10;
    while (n > 0){
        long long current_digit = n % 10;
        if (current_digit - last_digit > 1 || current_digit - last_digit < -1){
            cout << "NO\n";
            return;
        }
        last_digit = current_digit;
        n /= 10;
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}