#include <bits/stdc++.h>

using namespace std;

struct ThiSinh{
    string ten, ns;
    double d1, d2, d3;
};

void nhap(ThiSinh &A){
    getline(cin, A.ten);
    cin >> A.ns >> A.d1 >> A.d2 >> A.d3;
}

void in(ThiSinh A){
    double tong = A.d1 + A.d2 + A.d3;
    cout << A.ten << " " << A.ns << " ";
    cout << fixed << setprecision(1) << tong;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}