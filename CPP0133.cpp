#include <iostream>

using namespace std;

const int limit = 1e4 + 5;

int primenumber[limit];
int primecount;

void sieves(){
    bool is_prime[limit];
    for (int i = 2; i < limit; i++){
        is_prime[i] = true;
    }
    is_prime[0] = false; is_prime[1] = false;
    for (int i = 2; i * i < limit; i++){ 
        if (is_prime[i]){
            for (int j = i; j * i < limit; j++){
                is_prime[i * j] = false;
            }
        }    
    }
    primecount = 0;
    for (int i = 2; i < limit; i++){
        if (is_prime[i]){
            primenumber[primecount++] = i;
        }
    }
}

int main(){
    sieves();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 0; i < primecount && primenumber[i] <= n; i++){
            cout << primenumber[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}