#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string not_mid = "*";
    for(int i = 0; i < n - 2; i++) not_mid+= " ";
    not_mid += "*";
    for(int i = 0; i < n / 2; i++) cout << not_mid << "\n";
    for(int i = 0; i < n; i++) cout << "*";
    cout << "\n";
    for(int i = 0; i < n / 2; i++) cout << not_mid << "\n";
    return 0;
}