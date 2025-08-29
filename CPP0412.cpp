#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count[3] = {0,0,0};
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            count[temp]++;
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < count[i]; j++){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}