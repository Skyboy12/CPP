#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> str(n);
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin, str[i]);
    }
    int dif_count = 0;
    while (str.size() > 0) {
        str.erase(remove(str.begin(), str.end(), str.front()), str.end());
        dif_count++;
    }
    cout << dif_count << endl;
    
    return 0;
}