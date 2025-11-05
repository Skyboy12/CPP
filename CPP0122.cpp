#include <iostream>

using namespace std;

long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

int main(){
    int t;
    cin >> t;
    int test[t];
    int testmax = 0;
    for (int i = 0; i < t; i++){
        cin >> test[i];
        if (test[i] > testmax) testmax = test[i];
    }
    long long dp[testmax + 1];
    dp[0] = 1;
    for (int i = 1; i <= testmax; i++){
        dp[i] = lcm(dp[i - 1], i);
    }
    for (int i = 0; i < t; i++){
        cout << dp[test[i]] << "\n";
    }
}