#include <bits/stdc++.h>

using namespace std;

struct IC{
    long long price;
    long long amount;
};

bool cmp(IC a, IC b) {return a.price < b.price;}

int main(){
    int n;
    long long m;
    cin >> n >> m;
    vector<IC> a(n);
    for (auto &x : a) cin >> x.price >> x.amount;
    sort(a.begin(),a.end(),cmp);
    long long sum = 0;
    int index = 0;
    while (m){
        if (m >= a[index].amount){
            sum += a[index].amount * a[index].price;
            m-= a[index].amount;
        } else {
            sum += a[index].price * m;
            m = 0;
        }
        index++;
    }
    cout << sum;
    return 0;
}