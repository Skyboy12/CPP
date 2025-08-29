#include <bits/stdc++.h>

using namespace std;

const int max_num = 1e6+5;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> count(max_num, 0);
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            count[x]++;
        }
        count.erase(remove(count.begin(), count.end(), 0), count.end());
        count.erase(remove(count.begin(), count.end(), 1), count.end());
        int sum = 0;
        for (int i = 0; i < count.size(); i++)
            sum += count[i];
        cout << sum << endl;
    }
    return 0;
}