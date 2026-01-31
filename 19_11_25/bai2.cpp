#include <bits/stdc++.h>

using namespace std;

class SoPhuc{
    private:
        int r, i;
    public:
        SoPhuc (int a, int b){
            this->r = a;
            this->i = b;
        }
        friend istream& operator>>(istream& in, SoPhuc& a){
            in >> a.r >> a.i;
            return in;
        }
        friend ostream& operator<<(ostream& out, SoPhuc a){
            out << a.r << " + "<< a.i<< "i";
            return out;
        }
        SoPhuc operator+(SoPhuc a){
            SoPhuc total(this->r, this->i);
            total.r += a.r;
            total.i += a.i;
            return total;
        }
};

int main() {
	SoPhuc p(2,3), q(4,5);
	cin >> p >> q;
	cout << p + q;
	return 0;
}