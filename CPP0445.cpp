#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int place = -1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == x) place = i + 1;
        }
        cout << place << "\n";
    }
    return 0;
}