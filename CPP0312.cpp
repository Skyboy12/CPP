#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string input;
        getline(cin, input);
        istringstream iss(input);
        string temp;
        int count = 0;
        while (iss >> temp) {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}