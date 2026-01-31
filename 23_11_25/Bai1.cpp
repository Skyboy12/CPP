#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n; cin.ignore();
    vector<string> inputs(n);
    for (auto& x : inputs) {
        getline(cin, x);
    }
    
    int i = 0;
    while (i < n){
        while (i < n && inputs[i].empty()) {
            i++;
        }
        if (i >= n) break;
        string topic = inputs[i];
        i++;
        int count = 0;
        while (i < n && !inputs[i].empty()) {
            count++;
            i++;
        }
        
        cout << topic << ": " << count << endl;
    }
}