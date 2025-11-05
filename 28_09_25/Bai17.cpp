#include <bits/stdc++.h>
using namespace std;

int arr[15];
bool used[15];
void print(int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void gen(int pos, int n) {
    if (pos == n - 1) {
        print(n);
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            arr[pos] = i;
            used[i] = true;
            gen(pos + 1, n);
            used[i] = false;
        }
    }
}

int main() {
    int n,k;
    cin >> n >> k;
    memset(used, false, sizeof(used));
    used[k] = true;
    arr[n-1] = k;
    gen(0, n);
    return 0;
}