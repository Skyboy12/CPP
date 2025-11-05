#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (count > 0){
        cout << 2 << " " << count << "\n";
    }
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            cout << i << " " << count << "\n";
        }
    }
    if (n > 1) {
        cout << n << " " << 1 << "\n";
    }
    return 0;
}