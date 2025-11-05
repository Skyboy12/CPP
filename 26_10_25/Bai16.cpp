#include <bits/stdc++.h>
using namespace std;

void gen_factorials(vector<long long> &fact, int n, long long modulo) {
    fact[0] = 1;
    for (long long i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * (i % modulo)) % modulo;
    }
}

long long calculate_F(const vector<long long> &fact, long long x, long long modulo) {
    long long result = 0;
    for (long long i = 1; i <= x; i++) {
        result = (result + ((i % modulo) * ((x % modulo) + fact[i])) % modulo) % modulo;
    }
    return result;
}

int main(){
    long long n, modulo;
    cin >> n >> modulo;
    vector<long long> a(n);
    long long max_a = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }
    vector<long long> fact(max_a + 1);
    gen_factorials(fact, max_a, modulo);
    long long result = 0;
    for (int i = 0; i < n; i++){
        result = (result + calculate_F(fact, a[i], modulo)) % modulo;
    }
    cout << result << endl;
    return 0;
}
