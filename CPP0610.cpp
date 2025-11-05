#include <bits/stdc++.h>

using namespace std;
struct NhanVien{
    string ma, ten, gt, ns, dc, mst, hd;
    friend istream& operator >> (istream &in, NhanVien &a){
        a.ma = "00001";
        scanf("\n");
        getline(in, a.ten);
        in >> a.gt >> a.ns;
        scanf("\n");
        getline(in, a.dc);
        in >> a.mst >> a.hd;
        return in;
    }
    friend ostream& operator >> (ostream &out, NhanVien a){
        out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}