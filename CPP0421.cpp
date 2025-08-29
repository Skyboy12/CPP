#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> res(n);
        memset(res.data(), -1, sizeof(res[0]) * n);
        long long temp = 0;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if (0 <= temp && temp < n) res[temp] = temp;
        }
        for (auto it : res) cout << it << " ";
        cout << "\n";
    }
    return 0;
}