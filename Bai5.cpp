#include <bits/stdc++.h>

using namespace std;
int n, k;
vector<int> arr;
vector<int> curr_arr;

void print_arr() {
    for (int i = 0; i < curr_arr.size(); i++) {
        cout << curr_arr[i] << " ";
    }
    cout << endl;
}

void backtrack(int idx, int curr_sum) {
    if (curr_sum == k) {
        print_arr();
        return;
    }
    if (curr_sum > k || idx >= n) {
        return;
    }

    for (int i = idx; i < n; i++) {
        curr_arr.push_back(arr[i]);
        backtrack(i + 1, curr_sum + arr[i]);
        curr_arr.pop_back();
    }
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    backtrack(0,0);
    return 0;
}