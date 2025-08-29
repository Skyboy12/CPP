#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        while (a.back() + a.front() > k){
            a.pop_back();
        }
        int count = 0;
        for (int i = 0; i < (int)a.size() - 1; i++) {
            for (int j = i + 1; j < (int)a.size(); j++) {
                if (a[i] + a[j] == k) {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}