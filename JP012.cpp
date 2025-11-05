#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float gpa;
};

void nhapThongTinSV(SinhVien &a){
    a.maSV = "N20DCCN001";
    getline(cin, a.hoTen);
    getline(cin, a.lop);
    
    string ns;
    getline(cin, ns);
    stringstream ss(ns);
    string day, month, year;
    
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);
    
    if (day.length() == 1) {
        day = "0" + day;
    }
    if (month.length() == 1) {
        month = "0" + month;
    }
    
    a.ngaySinh = day + "/" + month + "/" + year;
    
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a){
    cout << a.maSV << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}