#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[101][101];
int res=0;
int firstc=INT_MAX,firsth=INT_MAX;
int lastc=INT_MIN,lasth=INT_MIN;
void loang(int i,int j){
	res++;
	firstc=min(firstc,j);
	firsth=min(firsth,i);
	lasth=max(lasth,i);
	lastc=max(lastc,j);
	a[i][j]=0;
	int dx[8]={0,0,-1,-1,-1,1,1,1};
	int dy[8]={-1,1,0,1,-1,1,-1,0};
	for(int k=0 ; k<8 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && j1>=0 && i1<n && j1<m && a[i1][j1]==1){
			loang(i1,j1);
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
		}
	}
	int ans=0;
	for(int i=0 ; i<n ;i++){
		for(int j=0 ; j<m ; j++){
			if(a[i][j]==1){
				loang(i,j);
				int d=lasth-firsth+1;
				int r=lastc-firstc+1;
				if(res==d*r) ++ans;
				res=0;
                firstc=INT_MAX;firsth=INT_MAX;
                lastc=INT_MIN;lasth=INT_MIN;
			}
		}
	}
	cout << ans << endl;
}
