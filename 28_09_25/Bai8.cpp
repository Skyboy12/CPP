#include <bits/stdc++.h>

using namespace std;

long long P(long long x){
    switch (x % 4){
        case 0: return x;
        case 1: return 1;
        case 2: return x+1;
        case 3: return 0;
    }
    return 0;
}

int main(){
    long long a,b;
    cin >> a >> b;
    if (a > b) swap(a,b);
    long long ans = P(b) ^ P(a-1);
    cout << ans;
    return 0;
}