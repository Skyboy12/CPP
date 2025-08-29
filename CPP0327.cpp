#include <bits/stdc++.h>

using namespace std;

bool binary_divided_by_5(string number){
    int start = 1;
    int total_sum = 0;
    for(int i = number.length() - 1; i >= 0; i--){
        total_sum += (number[i] - '0') * start;
        start = (start * 2) % 5;
    }
    return total_sum % 5 == 0;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string number;
        cin >> number;
        if (binary_divided_by_5(number)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}