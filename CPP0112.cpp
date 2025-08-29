#include <iostream>
#include <cmath>

using namespace std;

void solve(){
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << fixed;
    cout.precision(4);
    cout << distance << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}