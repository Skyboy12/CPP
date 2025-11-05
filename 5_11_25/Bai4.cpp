#include <bits/stdc++.h>

using namespace std;

class KhachHang{
    protected:
        string makh, tenkh, gt, ns, dc;
    public:
        friend istream& operator>> (istream& in, KhachHang& a){
            static int idkh = 1;
            a.makh = "KH" + string(3 - to_string(idkh).length(), '0') + to_string(idkh++);
            getline(in, a.tenkh);
            getline(in, a.gt);
            getline(in, a.ns);
            getline(in, a.dc);
            return in;
        }
        string getmkh(){
            return makh;
        }
        string gettkh(){
            return tenkh;
        }
        string getdc(){
            return dc;
        }
};
vector<KhachHang> DSKH;
class MatHang{
    protected:
        string mamh, tenmh, dv;
        long long gm, gb;
    public:
        friend istream& operator>> (istream& in, MatHang &a){
            static int idmh = 1;
            a.mamh = "MH" + string(3 - to_string(idmh).length(), '0') + to_string(idmh++);
            in.ignore();
            getline(in, a.tenmh);
            in >> a.dv;
            in >> a.gm >> a.gb;
            return in; 
        }
        string getmmh(){
            return mamh;
        }
        string gettmh(){
            return tenmh;
        }
        long long getgm(){
            return gm;
        }
        long long getgb(){
            return gb;
        }
};
vector<MatHang> DSMH;
class HoaDon: public KhachHang, public MatHang{
    private:
        string mahd;
        int sl;
        long long tt, ln;
    public:
        friend istream& operator>> (istream& in, HoaDon &a){
            static int idhd = 1;
            a.mahd = "HD" + string(3 - to_string(idhd).length(), '0') + to_string(idhd++);
            string kh, mh;
            in >> kh;
            in >> mh;
            in >> a.sl;
            for (auto x : DSKH){
                if (x.getmkh() == kh){
                    a.tenkh = x.gettkh();
                    a.dc = x.getdc();
                    break;
                }
            }
            for (auto y : DSMH){
                if (y.getmmh() == mh){
                    a.mamh = y.getmmh();
                    a.tenmh = y.gettmh();
                    a.gm = y.getgm();
                    a.gb = y.getgb();
                    break;
                }
            }
            a.tt = a.sl * a.gb;
            a.ln = a.tt - a.sl * a.gm;
            return in;
        }
        friend ostream& operator<< (ostream& out, HoaDon &a){
            out << a.mahd << " " << a.tenkh << " " << a.dc << " " << a.tenmh << " " << a.sl << " " << a.tt << " " << a.ln << endl;
            return out;
        }
        friend void sapxep(vector<HoaDon> &v){
            sort(v.begin(), v.end(), [](HoaDon &a, HoaDon &b){
                return a.ln > b.ln;
            });
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        KhachHang a;
        cin >> a;
        DSKH.push_back(a);
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++){
        MatHang b;
        cin >> b;
        DSMH.push_back(b);
    }
    int k; cin >> k;
    cin.ignore();
    vector<HoaDon> v;
    for (int i = 0; i < k; i++){
        HoaDon c;
        cin >> c;
        v.push_back(c);
    }
    sapxep(v);
    for (auto x : v){
        cout << x;
    }
    return 0;
}