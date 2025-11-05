#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);
    int sum = 0;
    bool hasodd = false;
    bool haseven = false;
    for (char c : s) {
        sum += (c - '0');
        if ((c - '0') % 2 == 0) haseven = true;
        else hasodd = true;
    }
    if (isPrime(sum) && hasodd && haseven) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}