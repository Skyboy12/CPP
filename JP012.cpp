#include <bits/stdc++.h>
using namespace std;

vector<long long> fibos;

void generate_fibos(){
    int MAX = 100;
    fibos.push_back(0);
    fibos.push_back(1);
    for(int i=2; i<MAX; i++){
        fibos.push_back(fibos[i-1] + fibos[i-2]);
    }
    return;
}
int main(){
    generate_fibos();
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++) {
            cout << fibos[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}