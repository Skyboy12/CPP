#include <iostream>

using namespace std;

string bit;

bool flipflop(int n){
    if (n == -1) return false;
    if (bit[n] == '0'){
        bit[n] = '1';
        return true;
    } else {
        bit[n] = '0';
        return flipflop(n-1) && 1;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        bit = "";
        for (int i = 0; i < n; i++) {
            bit = bit + "0";
        }
        bool check = true;
        do {
            cout << bit << " ";
            check = flipflop(n-1);
        } while (check);
        cout << endl;
    }
    return 0;
}