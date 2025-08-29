#include <iostream>

using namespace std;

const int limit = 1e3+5;
int primenumber[limit];
int primecount;

void sieves(){
    bool isprime[limit];
    for (int i = 2; i < limit; i++){
        isprime[i] = true;
    }
    isprime[0] = false; isprime[1] =  false;
    for (int i = 2; i * i < limit; i++){
        if (isprime[i]){
            for (int j = i; i * j < limit; j++){
                isprime[i*j]= false;
            }
        }
    }
    primecount = 0;
    for (int i = 2; i < limit; i++){
        if (isprime[i]){
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
        for (int i = 0; i < primecount && primenumber[i] * primenumber[i] <=n; i++){
            cout << primenumber[i] * primenumber[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}