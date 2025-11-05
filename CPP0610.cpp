#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

class PhanSo{
private:
    long long tu, mau;
public:
    PhanSo(long long tu = 0, long long mau = 1){
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator>>(istream &in, PhanSo &a){
        in >> a.tu >> a.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo a){
        out << a.tu << "/" << a.mau;
        return out;
    }
    friend PhanSo operator+(PhanSo a, PhanSo b){
        PhanSo c;
        c.tu = a.tu * b.mau + b.tu * a.mau;
        c.mau = a.mau * b.mau;
        long long g = gcd(c.tu, c.mau);
        c.tu /= g;
        c.mau /= g;
        return c;    
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}