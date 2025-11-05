#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << (n % 100 == 86) << "\n";
    }
    return 0;
}