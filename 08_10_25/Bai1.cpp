#include <bits/stdc++.h>
using namespace std;
struct cord{
    int x, y;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<cord> infected;
    vector<cord> cannot_infect;
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> temp;
            if(temp == -1) infected.push_back({i, j});
            if(temp < -1) cannot_infect.push_back({i, j});
        }
    }
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for(auto i : infected){
        for (int j = max(0, i.x - 1); j <= min(n - 1, i.x + 1); j++){
            for (int k = max(0, i.y - 1); k <= min(m - 1, i.y + 1); k++){
                matrix[j][k] = 1;
            }
        }
    }
    for(auto i : cannot_infect){
        matrix[i.x][i.y] = 0;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 1) count++;
        }
    }
    cout << count - infected.size();
    return 0;
}