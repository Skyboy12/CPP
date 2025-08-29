#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        long long mod = n % k;
        long long ans = ((n / k) * (k * (k - 1) / 2)) + (mod * (mod + 1) / 2);
        cout << (k == ans) << endl;
    }
    return 0;
}