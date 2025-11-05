#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    if (m != n){
        cout << "0";
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < m; i++){
        sum += a[i][i] + a[i][n - i - 1];
    }
    if (m % 2 != 0) sum -= a[m / 2][m / 2];
    cout << sum;
    return 0;
}