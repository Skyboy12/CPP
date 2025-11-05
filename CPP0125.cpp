#include <iostream>

using namespace std;

const int limit = 1e6+5;
bool is_prime[limit];

void sieve() {
    for (int i = 2; i < limit; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main(){
    sieve();
    int l, r;
    cin >> l >> r;
    if (l > r) swap(l, r);
    for (int i = l ; i < r; i++) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}