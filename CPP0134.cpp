#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int current = 2;
        while (n % 2 == 0 && k > 0){
            n /= 2;
            k--;
        }
        for (int i = 3; i * i <= n && k > 0; i+=2){
            if (n % i == 0){
                current = i;
                while (n % i == 0 && k > 0){
                    n /= i;
                    k--;
                }
            }
        }
        if (n != 1 && k > 0){
            current = n;
            k--;
        }
        if (k != 0){
            cout << "-1\n";
        } else {
            cout << current << "\n";
        }
    }
    return 0;
}