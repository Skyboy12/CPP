#include <iostream>

using namespace std;

long long fibo[92];

void generate(){
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < 92; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int main(){
    generate();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << fibo[n - 1] << "\n";
    }
    return 0;
}