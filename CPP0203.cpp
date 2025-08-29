#include <bits/stdc++.h>

using namespace std;

bool check[1000005];

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int temp, max_ = 0;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (temp > 0){
                check[temp] = true;
                max_ = max(max_, temp);
            }
        }
        int ans = max_ + 1;
        for (int i = max_; i > 0; i--){
            if (check[i]){
                check[i] = false;
            } else ans = i;
        }
        cout << ans << endl;
    }
    return 0;
}