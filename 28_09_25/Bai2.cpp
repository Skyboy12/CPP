#include <bits/stdc++.h>
using namespace std;

int MAX = 1e4 + 7;
bool isprime[10005];
void sieve(){
    memset(isprime, true, sizeof(isprime));
    isprime[0] = isprime[1] = false;
    for(int i = 2; i * i <= MAX; i++){
        if(isprime[i]){
            for(int j = i * i; j <= MAX; j += i){
                isprime[j] = false;
            }
        }
    }
}
int main(){
    sieve();
    int t; cin >> t;
    while (t--){
        int l, r; cin >> l >> r;
        for(int i = l; i <= r; i++){
            if(isprime[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}