#include <bits/stdc++.h>

using namespace std;

int arr[220];

void print_arr(int k){
    for (int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void gen(int k, int current_index, int left){
    if (left == 0){
        print_arr(k);
    }
    for(int i = current_index; i > k-left; i--){
        arr[left-1] = i;
        gen(k,i-1,left-1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        gen(k,n,k);
        cout << "\n";
    }
}