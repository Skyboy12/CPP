#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int *n = new int;
        int *k = new int;
        cin >> *n >> *k;
        int *a = new int[*n];
        int *f = new int[*n + 1];
        f[0] = 0;
        for(int i = 0; i < *n; i++) {
            cin >> a[i];
            f[i + 1] = f[i] + a[i];
        }
        float maxAvg = -1e9;
        int maxStart = 0;
        for(int i = *k; i <= *n; i++){
            float avg = (float)(f[i] - f[i - *k]) / (*k);
            if(avg > maxAvg) {
                maxAvg = avg;
                maxStart = i - *k;
            }
        }
        for (int i = maxStart; i < maxStart + *k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        delete n;
        delete k;
        delete[] a;
        delete[] f;
    }
    return 0;
}