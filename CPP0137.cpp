#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+5;
bool is_prime[MAX];

void sieve(){
    for (int i = 0; i < MAX; i++){
        is_prime[i] = true;
    }
    is_prime[0] = false; is_prime[1] = 0;
    for (int i = 2; i * i < MAX; i++){
        if (is_prime[i]){
            for (int j = i; j * i < MAX; j++){
                is_prime[j*i] = false;
            }
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = (int)sqrt(l); i <= (int)sqrt(r+1); i++){
            if (is_prime[i]){
                count++;   
            }
        }
        cout << count << endl;
    }
}