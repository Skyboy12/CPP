#include <bits/stdc++.h>
using namespace std;

const long long MAX = 1e18+5;
vector<long long> fibo;

void init(){
    fibo.push_back(0);
    fibo.push_back(1);
    for (int i = 2; ; i++){
        long long next = fibo[i - 1] + fibo[i - 2];
        if (next > MAX) break;
        fibo.push_back(next);
    }
}
bool isFibo(long long n){
    return binary_search(fibo.begin(), fibo.end(), n);
}
int main(){
    int t; cin >> t;
    init();
    while (t--){
        long long n; cin >> n;
        if (isFibo(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}