#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == -1){
                int L_i = max(0, i - 1);
                int R_i = min(n - 1, i + 1);
                int L_j = max(0, j - 1);
                int R_j = min(m - 1, j + 1);
                for (int ii = L_i; ii <= R_i; ii++){
                    for (int jj = L_j; jj <= R_j; jj++){
                        if (a[ii][jj] != -1 ){
                            a[ii][jj] = -2;
                        }
                    }
                }
                a[i][j] = -1;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == -2) count++;
        }
        cout << endl;
    }
    cout << count;
    return 0;
}