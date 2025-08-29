#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string input;
        getline(cin, input);
        istringstream iss(input);
        vector<int> numbers;
        int odd_count = 0;
        int even_count = 0;
        int num;
        while(iss >> num){
            numbers.push_back(num);
            if(num % 2 == 0) even_count++;
            else odd_count++;
        }
        if (odd_count > even_count && numbers.size() % 2 == 1) {
            cout << "YES\n";
        } else if (even_count > odd_count && numbers.size() % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}