#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string ma, ten, gioiTinh, ngaySinh, diaChi, maThue, ngayKy;
};

void nhap(NhanVien &a){
    static int id = 1;
    if (id == 1) cin.ignore();
    getline(cin, a.ten);
    getline(cin, a.gioiTinh);
    getline(cin, a.ngaySinh);
    getline(cin, a.diaChi);
    getline(cin, a.maThue);
    getline(cin, a.ngayKy);
    stringstream ss;
    ss << setw(5) << setfill('0') << id++;
    a.ma = ss.str();
}

void inds(NhanVien ds[], int N){
    for(int i = 0; i < N; i++){
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].gioiTinh << " " << ds[i].ngaySinh << " " << ds[i].diaChi << " " << ds[i].maThue << " " << ds[i].ngayKy << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}