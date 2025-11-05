#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        vector<vector<int>> f(n, vector<int>(m));
        f = a;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] ==1){
                    for (int k = 0; k < m; k++){
                        f[i][k] = 1;
                    }
                    for (int k = 0; k < n; k++){
                        f[k][j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << f[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}