#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
    string ma, ten, gt, ns, dc, mst, hd;
};

void nhap(NhanVien &a){
    a.ma = "00001";
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.mst);
    getline(cin, a.hd);
}

void formatDate(string &s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3, "0");
}

void in(NhanVien a){
    formatDate(a.ns);
    formatDate(a.hd);
    cout << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}