#include <bits/stdc++.h>

using namespace std;

int find(vector<int> &v, int x){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x) return i;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(m);
        for(int i = 0; i < m; i++) cin >> b[i];

        vector<int> unionSet;
        vector<int> intersectionSet;
        for(int i = 0; i < n; i++) unionSet.push_back(a[i]);
        for(int i = 0; i < m; i++){
            if(find(a, b[i]) != -1){
                intersectionSet.push_back(b[i]);
            } else {
                unionSet.push_back(b[i]);
            }
        }

        sort(unionSet.begin(), unionSet.end());
        sort(intersectionSet.begin(), intersectionSet.end());
        
        for (auto it : unionSet) cout << it << " ";
        cout << "\n";
        for (auto it : intersectionSet) cout << it << " ";
        cout << "\n";
    }
    return 0;   
}