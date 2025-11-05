#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string _ID, _name, _class, _birth;
        float gpa;
    public:
        friend istream& operator>>(istream &in, SinhVien &sv){
            in.ignore();
            getline(in, sv._name);
            in >> sv._class >> sv._birth >> sv.gpa;
            if(sv._birth[2] != '/') sv._birth = "0" + sv._birth;
            if(sv._birth[5] != '/') sv._birth.insert(3, "0");
            static int id = 1;
            sv._ID = "B20DCCN" + string(3 - to_string(id).length(), '0') + to_string(id);
            id++;
            return in;
        }
        friend ostream& operator<<(ostream &out, SinhVien sv){
            out << sv._ID << " " << sv._name << " " << sv._class << " " << sv._birth << " ";
            out << fixed << setprecision(2) << sv.gpa << endl;
            return out;
        }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}