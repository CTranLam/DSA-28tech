#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n; 
int a[100][100];
vector<string>ans;
void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
}
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};
int dem[100][100];
void Try(int i,int j,string s){
	if(i==n && j==n){
		ans.push_back(s);
		return;
	}
	else{
		for(int k=0 ; k<4 ; k++){
			int i1=i+dx[k];
			int j1=j+dy[k];
			if(i1 >=1 && i1<=n && j1>=1 && j1<=n && dem[i1][j1]==0){
				dem[i1][j1]=1;
				s+=a[i1][j1]+'0';
				Try(i1,j1,s);
				s.pop_back();
				dem[i1][j1]=0;
			}
		}
	}
}
int main(){
	nhap();
	string s=to_string(a[1][1]);
	dem[1][1]=1;
	Try(1,1,s);
	string res="";
	int cur=0;
	for(string x : ans){
		string t=x;
		reverse(t.begin(),t.end());
		int sum=0;
		for(int i=0 ; i<t.size()-1 ; i++){
			sum+=t[i]*pow(2,i);
		}
		if(sum>cur){
			cur=sum;
			res=x;
		}
	}
	cout << res << endl;
}
