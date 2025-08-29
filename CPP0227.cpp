#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        bool reverse = false;
        for (int i = 0; i < n; i++){
            if (!reverse){
                for (int j = 0; j < n; j++) cout << a[i][j] << " ";
            } else {
                for (int j = n - 1; j >= 0; j--) cout << a[i][j] << " ";
            }
            reverse = !reverse;
        }
        cout << endl;
    }
    return 0;
}