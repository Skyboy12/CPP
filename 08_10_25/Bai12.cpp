#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<string> a(11);
    a[0] = "0"; a[1] = "45"; a[2] = "495";
    for (int i = 3; i <= 10; i++){
        if (i % 2 == 0){
            a[i] = a[i - 1] + "0";
        } else {
            a[i] = a[i - 1] + "00";
        }
    }
    cout << a[n];
    return 0;
}