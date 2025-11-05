#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+5;

bool prime[MAX];

void sieve() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int count = 0;  
        for (int i = 2; (long long)i * i <= n; i++) {
            if (prime[i]){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}