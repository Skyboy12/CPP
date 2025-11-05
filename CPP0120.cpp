#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return  (a / gcd(a, b)) * b;
}
int div_each(int m, int n, int x){
    int low = (m - 1) / x;
    int high = (n / x);
    return high - low;
}

int main(){
    int t; cin >> t;
    while (t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int lcm_ab = lcm(a, b);
        cout << div_each(m, n, a) + div_each(m, n, b) - div_each(m, n, lcm_ab) << endl;
    }
    return 0;
}