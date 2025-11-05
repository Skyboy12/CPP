#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &a){
    int n = a.size();
    int m = a[0].size();
    for (int k = 0; k <= (n-1)+(m-1); k++){
        vector<int> diag;
        for (int i = 0; i < n; i++){
            int j = k - i;
            if (j >= 0 && j < m && i >= 0 && i < n){
                diag.push_back(a[i][j]);
            }
        }
        if (k % 2 == 0){
                reverse(diag.begin(), diag.end());
            }
        for (int val : diag){
            cout << val << " ";
        }
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        solve(a);
    }
    return 0;

}