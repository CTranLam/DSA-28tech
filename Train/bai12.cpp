#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
struct matran{
    ll a[2][2];
    friend matran operator * (matran x, matran y){
        matran res;
        for(int i=0 ; i<2 ; i++){
            for(int j=0 ; j<2 ; j++){
                res.a[i][j]=0;
                for(int k=0 ; k<2 ; k++){
                    res.a[i][j]+=x.a[i][k]*y.a[k][j];
                    res.a[i][j]%=MOD;
                }
            }
        }
        return res;
    }
};
matran binpow (matran x,ll n){
    if(n==1) return x;
    matran a=binpow(x,n/2);
    if(n%2) return a*a;
    else return a*a*x;
}
int main(){
    ll n;
    cin >> n;
    matran t;
    t.a[0][0]=1;
    t.a[0][1]=1;
    t.a[1][0]=1;
    t.a[1][1]=0;
    matran res=binpow(t,n);
    cout << res.a[0][1] <<endl;
}