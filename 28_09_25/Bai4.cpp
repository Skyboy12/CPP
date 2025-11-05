#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e9+5;

bool prime[MAX];
int count_digit[10];
void check(int n){
    bool is_increase = true, is_decrease = true;
    int prev = n % 10;
    n /= 10;
    int length = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit > prev) is_increase = false;
        if (digit < prev) is_decrease = false;
        prev = digit;
        n /= 10;
        length++;
        if (is_increase == false && is_decrease == false) return;
    } 
    if (length >= 10) return;
    if (is_increase || is_decrease) count_digit[length]++;
    
}
void sieve() {
    memset(prime, true, sizeof(prime));
    memset(count_digit, 0, sizeof(count_digit));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = 10; i < MAX; i++) {
        if (prime[i]) {
            check(i);
        }
    }
}
int main() {
    sieve();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << count_digit[n] << "\n";
    }
    return 0;
}