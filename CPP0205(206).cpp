#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int max_ = 0;
        int temp;
        while (n--){
            cin >> temp;
            max_ = max(max_, temp);
        }
        cout << max_ << endl;
    }
    return 0;
}