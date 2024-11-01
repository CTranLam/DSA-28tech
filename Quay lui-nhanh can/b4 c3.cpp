#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int x[100],a[100],n,k;
void nhap(){
	cin >> n >>k;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
}
void Try(int pos , int tong , vector<int> res){
	for(int i=pos ; i<=n ; i++){
		res.push_back(a[i]);
		tong+=a[i];
		if(tong==k){
			cout <<"[";
			for(int j=0 ; j<res.size() ; j++){
				cout << res[j];
				if(j==res.size()-1) cout <<"]";
				else cout << " ";
			}
			cout << endl;
		}
		else if(tong<k){
			Try(i+1 ,tong,res);
			tong-=a[i];
			res.pop_back();
		}
	}
}
int main(){
	nhap();
	vector<int> v;
	Try(1,0,v);
}
