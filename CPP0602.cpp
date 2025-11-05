#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
private:
    string ma, ten, lop, ngaysinh;
    float gpa;
public:
    friend istream& operator >> (istream &in, SinhVien &a){
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.ngaysinh);
        in >> a.gpa;
        in.ignore();
        a.ma = "B20DCCN001";
        if (a.ngaysinh[1] == '/') a.ngaysinh = "0" + a.ngaysinh;
        if (a.ngaysinh[4] == '/') a.ngaysinh.insert(3, "0");
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a){
        out << a.ma << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " ";
        out << fixed << setprecision(2) << a.gpa;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}