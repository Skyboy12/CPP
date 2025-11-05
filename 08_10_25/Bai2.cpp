#include <bits/stdc++.h>

using namespace std;
struct Kitu{
    char c;
    int count = 0;
};

bool cmp(Kitu a, Kitu b){
    if(a.count != b.count) return a.count > b.count;
    return a.c < b.c;
}

int main(){
    string s;
    getline(cin, s);
    Kitu a[26];
    for (int i = 0; i < s.length(); i++){
        char c = s[i];
        c = tolower(c);
        a[c - 'a'].c = c;
        a[c - 'a'].count++;
    }
    sort(a, a + 26, cmp);
    for (int i = 0; i < 26; i++){
        if(a[i].count == 0) break;
        cout << a[i].c << ": " << a[i].count << endl;
    }
    return 0;
}
