#include <bits/stdc++.h>
using namespace std;

class person{
    private:
        string name;
        int d_b, m_b, y_b;
    public:
        friend istream &operator>>(istream &in, person &a){
            string birth;
            cin >> a.name >> birth;
            stringstream ss(birth);
            while (getline(ss, birth, '/')){
                a.d_b = stoi(birth);
                getline(ss, birth, '/');
                a.m_b = stoi(birth);
                getline(ss, birth, '/');
                a.y_b = stoi(birth);
            }
            return in;
        }
        void print_name(){
            cout << name << endl;
        }
        friend void sort_by_age(vector<person> &people){
            sort(people.begin(), people.end(), [](person &a, person &b){
                if (a.y_b != b.y_b) return a.y_b < b.y_b;
                if (a.m_b != b.m_b) return a.m_b < b.m_b;
                return a.d_b < b.d_b;
            });
        }
};

int main(){
    int n;
    cin >> n;
    vector<person> people(n);
    for (int i = 0; i < n; i++){
        cin >> people[i];
    }
    sort_by_age(people);
    people[n-1].print_name();
    people[0].print_name();
    return 0;
}