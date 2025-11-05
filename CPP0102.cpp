#include <iostream>
#include <cctype>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        if (iswupper(c)) {
            cout << (char)tolower(c) << endl;
        } else if (iswlower(c)) {
            cout << (char)toupper(c) << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}