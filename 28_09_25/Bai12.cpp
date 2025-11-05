#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> dif;
    cin.ignore();
    int count = 0;
    for(int i = 0; i < n; i++){
        string temp;
        getline(cin, temp);
        bool found = false;
        for (auto &s : dif){
            if (temp == s) {
                found = true;
                break;
            }
        }
        if (!found){
            dif.push_back(temp);
            count++;
        }
    }
    cout << count;
    return 0;
}