#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string input;
        getline(cin, input);
        int count = 0;
        for (int i = 0; i < input.size(); i++){
            for (int j = i; j < input.size(); j++){
                count += input[i] == input[j];
            }
        }
        cout << count << endl;
    }
}