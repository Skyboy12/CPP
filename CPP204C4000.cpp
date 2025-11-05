#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    if (input.is_open() && output.is_open()){
        string line;
        while (getline(input, line)){
            output << line << endl;
        }
    }
    input.close();
    output.close();
    return 0;
}