#include <bits/stdc++.h>
using namespace std;

long long _gcd(int a, int b){
    if (b==0) return a;
    else return _gcd(b, a % b);
}

class PhanSo {
    private:
        long long tu, mau;
        void rutGon() {
            long long gcd = __gcd(abs(tu), abs(mau));
            tu /= gcd;
            mau /= gcd;
            if (mau < 0) {
                tu = -tu;
                mau = -mau;
            }
        }
    public:
        PhanSo(long long t, long long m) : tu(t), mau(m) {
        }
        friend istream& operator>>(istream &in, PhanSo &ps) {
            in >> ps.tu >> ps.mau;
            return in;
        }
        friend ostream& operator<<(ostream &out, PhanSo ps) {
            out << ps.tu << "/" << ps.mau;
            return out;
        }
        PhanSo operator+(const PhanSo &other) {
            long long t = tu * other.mau + other.tu * mau;
            long long m = mau * other.mau;
            PhanSo tong(t,m);
            tong.rutGon();
            return tong;
        }
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}