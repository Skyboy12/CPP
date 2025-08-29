#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    long long factorial = 1;
    for(long long i = 1; i <= n; i++){
        factorial *= i;
        sum += factorial;
    }
    cout << sum << endl;
    return 0;
}