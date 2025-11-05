#include <iostream>
#include <string>

using namespace std;

const string ma1 = "ABBADCCABDCCABD";
const string ma2 = "ACCABCDDBBCDDBB";

void solve(int n){
    string ans;
    if (n == 101){
        ans = ma1;
    } else {
        ans = ma2;
    }
    int correct = 0;
    for (int i = 0; i < 15; i++){
        char c;
        cin >> c;
        if (c == ans[i]){
            correct++;
        }
    }
    double mark = 10.0 * correct / 15.0;
    cout << fixed;
    cout.precision(2);
    cout << mark << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        solve(n);
    }
}