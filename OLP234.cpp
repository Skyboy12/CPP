#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    long long total_pairs = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }

        long long k = j - i;

        total_pairs += k * (k - 1) / 2;

        i = j;
    }

    cout << total_pairs << "\n";

    return 0;
}