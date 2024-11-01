#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1000005;
int a[maxn],bit[maxn],n;
// a[pos]+=value;
// pos & (-pos) lay ra bit 1 cuoi cung
void update(int pos ,int val){ // xay dung lai cay nhi phan
    // tu chi so pos den chi so n den cay np chua a[pos] nen se duoc update
	for( ; pos<=n ; pos+= pos&(-pos)){
		bit[pos]+=val;
	}
}
int query(int pos){
	int sum=0;
	for( ; pos>0 ; pos-=pos&(-pos)){
		sum+=bit[pos];
	}
	// vd 12 thi sum=bit[12]+bit[8]
	return sum;
}
int main(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
		update(i,a[i]);
		cout << a[i] <<" "<< bit[i] << endl;
	}
	// tong phan tu tu chi so 2 den chi so 5
	cout << query(5)-query(1) << endl;
}
