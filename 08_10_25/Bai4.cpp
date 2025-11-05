#include <bits/stdc++.h>

using namespace std;

struct Vehicle {
    string plate, type, direction, date;
    int seat;
};

struct Fee {
    string date;
    int fee = 0;
};

int pricefee(Vehicle v){
    if (v.direction == "OUT"){
        return 0;
    }
    if (v.type == "Xe_con"){
        if (v.seat == 5){
            return 10000;
        } else {
            return 15000;
        }
    }
    if (v.type == "Xe_tai"){
        return 20000;
    }
    if (v.type == "Xe_khach"){
        if (v.seat == 29){
            return 50000;
        } else {
            return 70000;
        }
    }
}
bool cmp(Fee a, Fee b){
    int d1 = stoi(a.date.substr(0,2));
    int m1 = stoi(a.date.substr(3,2));
    int y1 = stoi(a.date.substr(6,4));
    int d2 = stoi(b.date.substr(0,2));
    int m2 = stoi(b.date.substr(3,2));
    int y2 = stoi(b.date.substr(6,4));
    if (y1 != y2) return y1 < y2;
    if (m1 != m2) return m1 < m2;
    return d1 < d2;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Vehicle v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i].plate >> v[i].type >> v[i].seat >> v[i].direction >> v[i].date;
    }
    vector<Fee> fees;
    for (int i = 0; i < n; i++){
        bool found = false;
        for (int j = 0; j < fees.size(); j++){
            if (fees[j].date == v[i].date){
                fees[j].fee += pricefee(v[i]);
                found = true;
                break;
            }
        }
        if (!found){
            Fee f;
            f.date = v[i].date;
            f.fee = pricefee(v[i]);
            fees.push_back(f);
        }
    }
    sort(fees.begin(), fees.end(), cmp);
    for (auto f : fees){
        cout << f.date << ": " << f.fee << endl;
    }
    return 0;
}