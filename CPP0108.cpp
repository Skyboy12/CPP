#include <iostream>
#include <string>

using namespace std;

string numberprint;

int odd_count, even_count;
int printed;
void solve(int n, int index){
    if (index == n){
        if (odd_count == even_count){
            cout << numberprint << " ";
            if (++printed % 10 == 0) {
                cout << endl;
            }
        }
        return;
    }
    for (int i = 0; i <= 9; i++){
        if (index == 0 && i == 0) continue;
        numberprint[index] = '0' + i;
        if (i % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        solve(n, index + 1);
        if (i % 2 == 0) {
            even_count--;
        } else {
            odd_count--;
        }
    }
}


int main(){
    int n;
    cin >> n;
    numberprint.resize(n);
    odd_count = 0;
    even_count = 0;
    printed = 0;
    solve(n, 0);
    return 0;
}