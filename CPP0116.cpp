#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e4 + 5;

int spf[MAX];

void sieves() {
    spf[0] = 0;
    spf[1] = 1;
    for (int i = 2; i < MAX; ++i) spf[i] = 0;

    for (int i = 2; i < MAX; ++i) {
        if (spf[i] == 0) {
            spf[i] = i;
            if (1LL * i * i < MAX) {
                for (int j = i * i; j < MAX; j += i) {
                    if (spf[j] == 0) spf[j] = i;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieves();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        for (int i = 1; i <= n; i++){
            cout << spf[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}