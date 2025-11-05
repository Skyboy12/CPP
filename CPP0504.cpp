#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string ten, ns, lop;
    double gpa;
};

void nhap(SinhVien &a){
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
}

void formatDate(string &date){
    if(date[1] == '/') date = "0" + date;
    if(date[4] == '/') date.insert(3, "0");
}

void in(SinhVien a){
    formatDate(a.ns);
    cout << "B20DCCN001 " << a.ten << " " << a.lop << " " << a.ns << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}