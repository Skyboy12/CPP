#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    while (a.size() > 0){
        cout << a.front() << " ";
        a.erase(remove(a.begin(), a.end(), a.front()), a.end());
    }
    cout << endl;
    return 0;
}