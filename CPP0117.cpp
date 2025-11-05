#include <iostream>

using namespace std;

int sum_of_digits(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum >= 10) {
        return sum_of_digits(sum);
    } else return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << sum_of_digits(n) << "\n";
    }
    return 0;
}