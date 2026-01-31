#include <bits/stdc++.h>

using namespace std;

bool check(string a){
    if (a.length() < 3) return false;
    bool checking = false;
    string cstr = "aeiouAEIOU";
    for (char x : cstr){
        if (a[0] == x) return true;
    } 
    return false;
}

int main(){
    string input;
    getline(cin, input);
    istringstream streaminput(input);
    string token;
    int count = 0;
    while (streaminput >> token){
        if (check(token)) count++;
    }
    cout << count;
}