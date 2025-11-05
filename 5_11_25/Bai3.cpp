#include <bits/stdc++.h>

using namespace std;

class SinhVien {
    private:
        string masv, hoten, lop, detai, gbc;
    public:
        friend istream& operator >> (istream &in, SinhVien &a) {
            getline(in, a.masv);
            getline(in, a.hoten);
            getline(in, a.lop);
            getline(in, a.detai);
            getline(in, a.gbc);
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien a) {
            out << a.masv << ", " << a.hoten << ", " << a.lop << ", " << a.detai << ", " << a.gbc << endl;
            return out;
        }
};

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        SinhVien a;
        cin >> a;
        cout << a;
    }
    return 0;
}