#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min1 = -1, min2 = -1;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x < min1 || min1 == -1){
                min2 = min1;
                min1 = x; 
            } else if (x < min2 && x != min1){
                min2 = x;
            }
        }
        if (min2 == -1){
            cout << -1 << endl;
        } else {
            cout << min1 << " " << min2 << endl;
        }
    }
    return 0;
}