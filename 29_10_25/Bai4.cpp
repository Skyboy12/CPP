#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string _ID, _name, _class, _birth;
        double gpa;
        void format_name(){
            stringstream ss(_name);
            string token;
            vector<string> words;
            while(ss >> token){
                words.push_back(token);
            }
            _name = "";
            for(size_t i=0;i<words.size();i++){
                words[i][0] = toupper(words[i][0]);
                for(size_t j=1;j<words[i].length();j++){
                    words[i][j] = tolower(words[i][j]);
                }
                _name += words[i];
                if(i != words.size() - 1) _name += " ";
            }
        }
    public:
        friend void sapxep(SinhVien ds[], int N){
            sort(ds, ds + N, [](const SinhVien &a, const SinhVien &b){
                return a.gpa > b.gpa;
            });
        }
        friend istream& operator>>(istream &in, SinhVien &sv){
            in.ignore();
            getline(in, sv._name);
            in >> sv._class >> sv._birth >> sv.gpa;
            sv.format_name();
            if(sv._birth[1] == '/') sv._birth = "0" + sv._birth;
            if(sv._birth[4] == '/') sv._birth.insert(3, "0");
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
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}