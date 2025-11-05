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
        friend void sapxep(Student ds[], int N){
            sort(ds, ds + N, [](const Student &A, const Student &B){
                if (A._class != B._class){
                    return A._class < B._class;
                }
                return A._id < B._id;
            });
        }
};

int main(){
    int n;
    cin >> n;
    Student ds[n];
    for (int i = 0; i < n; i++){
        cin >> ds[i];
    }
    sapxep(ds, n);
    for (int i = 0; i < n; i++){
        cout << ds[i];
    }
    return 0;
}