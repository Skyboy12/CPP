#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++){
            cin >> array[i];
        }
        sort(array, array + n);
        int min_array = array[1] - array[0];
        for (int i = 2; i < n; i++){
            min_array = min(min_array, array[i] - array[i - 1]);
        }
        cout << min_array << endl;
    }
    return 0;
}