#include <bits/stdc++.h>

using namespace std;

bool divided_by_11(string number){
    int odd_sum = 0;
    int even_sum = 0;

    for(int i = 0; i < number.length(); i++){
        if(i % 2 == 0){
            even_sum += number[i] - '0';
        } else {
            odd_sum += number[i] - '0';
        }
    }

    return (even_sum - odd_sum) % 11 == 0;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string number;
        cin >> number;
        cout << divided_by_11(number) << endl;
    }
    return 0;
}
