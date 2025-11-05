#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long count = 0;
        while (n % 2 == 0){
            count++;
            n/=2;
        }
        if (count > 0) cout << 2 << " " << count << "\n";
        for (long long i = 3; i <= sqrt(n); i+=2){
            count = 0;
            while (n % i == 0){
                count++;
                n/=i;
            }
            if (count > 0) cout << i << " " << count << "\n";
        }
        if (n > 1) {
            cout << n << " " << 1 << "\n";
        }
        cout << "\n";
    }
    return 0;
}