#include <bits/stdc++.h>
using namespace std;

struct Complex {
    int real;
    int imag;
};

Complex sumComplex(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex multiplyComplex(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        Complex a,b;
        cin >> a.real >> a.imag >> b.real >> b.imag;
        Complex sum = sumComplex(a, b);
        Complex answer = multiplyComplex(sum, sum);
        cout << answer.real << " + " << answer.imag << "i" << endl;
    }
    return 0;
}