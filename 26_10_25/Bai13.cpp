#include <bits/stdc++.h>

using namespace std;

vector<int> Union(const vector<int>& a, const vector<int>& b) {
    set<int> s;
    for (int num : a) {
        s.insert(num);
    }
    for (int num : b) {
        s.insert(num);
    }
    return vector<int>(s.begin(), s.end());
}
vector<int> Intersection(const vector<int>& a, const vector<int>& b) {
    set<int> s;
    for (int num : a) {
        if (find(b.begin(), b.end(), num) != b.end()) {
            s.insert(num);
        }
    }
    return vector<int>(s.begin(), s.end());
}

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        vector<int> uni = Union(a, b);
        vector<int> inter = Intersection(a, b);
        for (auto &s : uni) cout << s << " ";
        cout << endl;
        for (auto &s : inter) cout << s << " ";
        cout << endl;
    }
    return 0;
}