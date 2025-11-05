#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for (int i = 0; i < a.size(); i++){
        if (a[i] == b[0]){
            string temp = a.substr(i,b.size());
            if (temp == b){
                cout << i + 1 << " ";
            }
        }
    }
    return 0;
}