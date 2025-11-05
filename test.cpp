#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    cout << n << endl;
    auto p = &n;
    *p = 10;
    cout << n << endl;
    return 0;
}