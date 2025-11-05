#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name; string birth; double d1, d2, d3;
};

void nhap(ThiSinh &A){
    getline(cin, A.name);
    cin >> A.birth >> A.d1 >> A.d2 >> A.d3;
}
void in(ThiSinh A){
    cout << A.name << " " << A.birth << " ";
    cout << fixed << setprecision(1) << A.d1 + A.d2 + A.d3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}