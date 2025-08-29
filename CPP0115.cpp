#include <iostream>

using namespace std;

const int Limit = 1e4 + 5;

bool is_prime[Limit];

int prime[Limit];
int prime_count;

void sieves() {
    for (int i = 2; i < Limit; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < Limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < Limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    prime_count = 0;
    for (int i = 2; i < Limit; i++) {
        if (is_prime[i]) {
            prime[prime_count++] = i;
        }
    }
}

int main(){
    sieves();
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 2) {
            cout << n << "\n";
            continue;
        }
        for (int i = 0; i < prime_count; i++) {
            if (n % prime[i] == 0) {
                cout << prime[i] << " ";
                int time = 0;
                while (n % prime[i] == 0) {
                    n /= prime[i];
                    time++;
                }
                cout << time << " ";
            } else if (n == 1) break;
        }
        cout << "\n";
    }
    
    return 0;
}