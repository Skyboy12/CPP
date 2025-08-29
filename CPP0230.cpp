#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < 3; i++){
            int temp;
            cin >> temp;
            if (temp == 0) count0++;
            else count1++;
        }
        ans += count1 > count0;
    }
    cout << ans << endl;
}