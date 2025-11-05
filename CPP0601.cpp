#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ma, ten, lop, ngaysinh;
    float gpa;
    void nhap();
    void xuat();
};
void SinhVien::nhap(){
    getline(cin, ten);
    getline(cin, lop);
    getline(cin, ngaysinh);
    cin >> gpa;
    ma = "B20DCCN001";
    if (ngaysinh[1] == '/') ngaysinh = "0" + ngaysinh;
    if (ngaysinh[4] == '/') ngaysinh.insert(3, "0");
}
void SinhVien::xuat(){
    cout << ma << " " << ten << " " << lop << " " << ngaysinh << " ";
    cout << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}