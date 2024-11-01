#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int dem2=0,dem5=0;
	int ans=1;
	for(int i=n ; i>=1 ; i--){ // xet tu cuoi ve se co nhieu so 5 hon
		int tmp=i;
		// so luong so 5 trong tmp hien tai
		while(tmp%5==0){
			++dem5;
			tmp/=5;
		}
		// co bao nhieu thang 5 thi tru di bay nhieu 2
		while(tmp%2==0 && dem5>0){
			tmp/=2;
			--dem5;
		}
		// trong tmp da het so 0
		ans=(ans*tmp%10)%10;
	}
	cout << ans << endl;
	
}
