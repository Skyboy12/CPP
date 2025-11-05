#include <bits/stdc++.h>
using namespace std;

struct Chude{
    string name;
    int soBai;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    cin.ignore();
    bool new_chude = true;
    vector<Chude> dsChude;
    for(int i = 0; i < n; i++){
        string s; getline(cin, s);
        if (new_chude){
            Chude cd;
            cd.name = s;
            cd.soBai = 0;
            dsChude.push_back(cd);
            new_chude = false;
        }
        else{
            if (s == "") {
                new_chude = true;
                cout << dsChude.back().name << ": " << dsChude.back().soBai << "\n";
            }
            else{
                dsChude.back().soBai++;
            }
        }
    }
    if (!new_chude){
        cout << dsChude.back().name << ": " << dsChude.back().soBai << "\n";
    }
    return 0;
}