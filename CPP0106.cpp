#include <iostream>

using namespace std;

bool is_palindrome(long long n) {
    long long reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        if (is_palindrome(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}