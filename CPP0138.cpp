#include <iostream>

using namespace std;

const int limit = 1e6;

int primelist[limit];
int primenumber = 0;
bool is_prime[limit + 5];

void sieve(){
    for (int i = 0; i < limit + 5; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit + 5; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit + 5; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= limit + 5; i++) {
        if (is_prime[i]) {
            primelist[primenumber++] = i;
        }
    }    
}

int main(){
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;
        int ans = 0;
        for (int i = 0; i < primenumber && primelist[i] * 2 <= n; i++) {
            if (is_prime[n - primelist[i]]) {
                found = true;
                ans = primelist[i];
                break;
            }
        }
        if (found) cout << ans << " " << n - ans << "\n";
    }
    return 0;
}