#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream cin("data.in");
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int count, x;
        count = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x % 2 == 0) count++;
        }
        cout << count << " " << n - count << endl;
    }
}