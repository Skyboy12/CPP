#include <bits/stdc++.h>
using namespace std;

class ThiSinh{
    private:
        string ten, ns;
        double d1, d2, d3;
    public:
        friend istream& operator>>(istream& in, ThiSinh& a){
            getline(in, a.ten);
            getline(in, a.ns);
            in >> a.d1 >> a.d2 >> a.d3;
            in.ignore();
            return in;
        }
        double tongDiem(){
            return d1 + d2 + d3;
        }
        void hienThi(){
            cout << fixed << setprecision(1) << ten << " " << ns << " " << tongDiem() << endl;
        }
};

int main(){
    ThiSinh a;
    cin >> a;
    a.hienThi();
    return 0;
}