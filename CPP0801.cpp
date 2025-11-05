#include <bits/stdc++.h>
using namespace std;

int modulo = 1e9 + 7;

vector<int> fibo = {0,1};
void fibo_gen(int n){
    for (int i = 2; i <= n; i++){
        fibo.push_back((fibo[i-1] + fibo[i-2]) % modulo);
    }
}

int main(){
    fibo_gen(1000);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fibo[n] << "\n";
    }
    return 0;
}