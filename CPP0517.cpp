#include <bits/stdc++.h>

using namespace std;

struct PhanSo {
    long long tu, mau;
};

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void nhap(PhanSo &p) {
    cin >> p.tu >> p.mau;
}

void in(PhanSo p) {
    cout << p.tu << "/" << p.mau << "\n";
}

PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo t;
    t.mau = lcm(p.mau, q.mau);
    t.tu = p.tu * (t.mau / p.mau) + q.tu * (t.mau / q.mau);
    long long g = gcd(t.tu, t.mau);
    t.tu /= g; t.mau /= g;
    return t;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}