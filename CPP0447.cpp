#include <bits/stdc++.h>

using namespace std;

bool larger(int a, int b) {
    return a > b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(auto &x: arr) cin >> x;
        sort(arr.begin(), arr.end(), larger);
        for (int i = 0; i < k; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}