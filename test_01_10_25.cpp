#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, ten, lop;
    float THCS2, CPP;
    public:
    friend istream& operator >> (istream &in, SinhVien &a) {
        getline(in, a.ma);
        getline(in, a.ten);
        getline(in, a.lop);
        in >> a.THCS2 >> a.CPP;
        in.ignore();
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a) {
        out << a.ma << " " << a.ten << " " << a.lop << " ";
        out << fixed << setprecision(1) << a.THCS2 + a.CPP << endl;
        return out;
    }
};
bool compare_name(SinhVien a, SinhVien b) {
    string name_a = a.ten.substr(a.ten.find_last_of(' ') + 1);
    string name_b = b.ten.substr(b.ten.find_last_of(' ') + 1);
    if (name_a != name_b) return name_a < name_b;
    return a.ma < b.ma;
}
bool compare_point(SinhVien a, SinhVien b) {
    if (a.THCS2 + a.CPP != b.THCS2 + b.CPP) return a.THCS2 + a.CPP > b.THCS2 + b.CPP;
    return a.ma < b.ma;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    SinhVien sv[n];
    cin.ignore();
    for (int i = 0; i < n; i++) cin >> sv[i];
    for (int i = 0; i < n; i++) {
        if (sv[i].CPP >= 7) cout << sv[i];
    }
    sort(sv, sv + n, compare_name);
    for (int i = 0; i < n; i++) cout << sv[i];
    cout << endl;
    sort(sv, sv + n, compare_point);
    for (int i = 0; i < n; i++) cout << sv[i];
    return 0;
}