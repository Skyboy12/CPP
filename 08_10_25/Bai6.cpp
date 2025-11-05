#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin, s);
    char filter[5] = {'a', 'e', 'i', 'o', 'u'};
    istringstream iss(s);
    string token;
    int count = 0;
    while(iss >> token){
        tolower(token[0]);
        if (token.length() > 2 && find(begin(filter), end(filter), token[0]) != end(filter)){
            count++;
        }
    }
    cout << count;
    return 0;
}