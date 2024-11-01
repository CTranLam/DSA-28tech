#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int n , m;
int a[101][101];
int dx[4]={1,-1,0,0};
int dy[4]={0 , 0 , 1, -1};
int ans=0;// chu vi
int dem(int i,int j){
	int cnt=0;
	for(int k=0 ; k<4 ; k++){ // dem xem chu vi 1 o la bao nhieu
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && i1 <n && j1>=0 && j1<m && a[i1][j1]>0) // a[i][j]=1 || 2
		{
			cnt++;
		}
	}
	return cnt;
}
void loang(int i , int j){
	a[i][j]=2; // danh dau o so 1 thanh 2 de sau con dem dc dien tich
	for(int k=0 ; k<4 ; k++){ // loang sang o khac thoa man
		int i1=dx[k]+i;
		int j1=dy[k]+j;
		if(i1>=0 && i1 <n && j1>= 0 && j1<m && a[i1][j1]==1){
			loang(i1 , j1);
		}
	}
	ans+=4-dem(i,j);
}
int main(){
		cin >>n >> m;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		vector<int> v;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				if(a[i][j]==1){
					ans=0;
					loang(i , j);
					v.push_back(ans);
				}
			}
		}
		sort(v.begin(),v.end());
		cout << v.back() <<endl;
	}
