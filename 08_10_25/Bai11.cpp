#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int length = n * m;
    vector<int> a(length);
    for (int i = 0; i < length; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = length - 1; i >= 0; i--){
        if (a[i] > k){
            sum += a[i];
        } else {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}