#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
struct PhanSo {
    long long tu, mau;
    PhanSo(long long tu = 0, long long mau = 1) : tu(tu), mau(mau) {}
    void rutgon() {
        long long g = gcd(tu, mau);
        tu /= g; mau /= g;
    }
    friend istream& operator >> (istream &in, PhanSo &p) {
        in >> p.tu >> p.mau;
        return in;
    }
    friend ostream& operator << (ostream &out, PhanSo p) {
        out << p.tu << "/" << p.mau << "\n";
        return out;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}