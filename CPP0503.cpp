#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long tu, mau;
};

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
    long long g = gcd(p.tu, p.mau);
    p.tu /= g;
    p.mau /= g;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}