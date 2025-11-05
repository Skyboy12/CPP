#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
        string masv, hoten, lop, ngaysinh;
        float gpa;
    public:
        friend istream& operator>>(istream &in, SinhVien &a) {
            getline(in, a.hoten);
            in >> a.lop >> a.ngaysinh >> a.gpa;
            in.ignore();
            static int id = 1;
            a.masv = "B20DCCN" + string(3 - to_string(id).length(), '0') + to_string(id++);
            if (a.ngaysinh[1] == '/') a.ngaysinh = "0" + a.ngaysinh;
            if (a.ngaysinh[4] == '/') a.ngaysinh.insert(3, "0");
            return in;
        }
        friend ostream& operator<<(ostream &out, SinhVien a) {
            out << a.masv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh << " ";
            out << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
};

int main() {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}