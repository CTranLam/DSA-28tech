#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //F[i] : do dai cua day co tang dai nhat ket thuc tai chi so i
    //F[i] : tong lon nhat cua day con tang dan ket thuc tai chi so
    int F[n];
    for(int i = 0; i < n; i++){
        F[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                F[i] = max(F[i], F[j] + 1); // F[i] = F[j] + 1
            }
        }
    }
    cout << *max_element(F, F + n) << endl;
}
