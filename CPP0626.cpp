#include <bits/stdc++.h>
using namespace std;

string head(string full){
    string str, token;
    stringstream input(full);
    str.clear();
        while (input >> token){
            str+=toupper(token[0]);
        }
    return str;
}

class GiangVien{
    private:
        string id, name, subj;
    public:
        friend istream& operator>>(istream& in, GiangVien&a){
            string fullsubj;
            getline(in, a.name);
            getline(in, fullsubj);
            a.subj = head(fullsubj);
            static int idnum = 1;
            stringstream ss;
            ss << "GV" << setw(2) << setfill('0') << idnum++;
            a.id = ss.str();
            return in;
        }
        friend ostream& operator<<(ostream& out, GiangVien&a){
            out << a.id << " " << a.name << " " << a.subj << endl;
            return out;
        }

        friend void gvsublist(vector<GiangVien> gvlist, string subj_a){
            string subj_s = head(subj_a);
            cout << "DANH SACH GIANG VIEN BO MON " << subj_s << ":\n";
            for (auto x : gvlist){
                if (x.subj == subj_s){
                    cout << x;
                }
            }
        }
};
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<GiangVien> gvlist(n);
    for (auto &x : gvlist){
        cin >> x;
    }
    int m; cin >> m;
    cin.ignore();
    for (int i = 0; i< m; i++){
        string subj;
        getline(cin, subj);
        gvsublist(gvlist, subj);
    }
    return 0;
}