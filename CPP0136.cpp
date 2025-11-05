#include <bits/stdc++.h>
using namespace std;
long long MAX = 1e12+5;
const int sqrt_MAX = 1e6+5;
int Count[sqrt_MAX] = {0};
bool isPrime[sqrt_MAX];
void sieve(){
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < sqrt_MAX; i++){
        if (isPrime[i]){
            for (int j = i * i; j < sqrt_MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
    for (int i = 1; i < sqrt_MAX; i++){
        Count[i] = Count[i - 1] + (isPrime[i] ? 1 : 0);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        cout << Count[(int)sqrt(n)] << endl;
    }
    return 0;
}