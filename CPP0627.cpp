#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        string _id, _name, _class, _mail;
    public: 
        friend istream& operator>>(istream &in, Student &st){
            in >> st._id;
            in.ignore(); getline(in, st._name);
            in >> st._class >> st._mail;
            return in;
        }
        friend ostream& operator<<(ostream &out, const Student &st){
            out << st._id << " " << st._name << " " << st._class << " " << st._mail << endl;
            return out;
        }
        friend void lietke(Student ds[], int N, string qclass){
            cout << "DANH SACH SINH VIEN LOP " << qclass << ":" << endl;
            for(int i=0;i<N;i++){
                if(ds[i]._class == qclass){
                    cout << ds[i];
                }
            }
        }
};

int main(){
    int n;
    cin >> n;
    Student ds[n];
    for (int i = 0; i < n; i++){
        cin >> ds[i];
    }
    int q;
    cin >> q;
    while(q--){
        string qclass;
        cin >> qclass;
        lietke(ds, n, qclass);
    }
    return 0;
}