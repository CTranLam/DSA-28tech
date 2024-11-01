#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[1005][1005];
int main(){
	string s; cin >> s;
	int n=s.size();
	s=" "+s;
	for(int i=1 ; i<=n ; i++){
		f[i][i]=1;
	}
	int res=1;
	// tao ra xau con co do dai la l
	for(int l=2 ; l<=n ; l++){
		for(int i=1 ; i<=n-l+1 ; i++){
			// so sanh ki tu s[i] va s[i+l-1]
			int j=i+l-1;
			if(l==2){ // TH l=2 k co xau con o giua
				if(s[i]==s[j]) f[i][j]=1;
			}
			else{
				if(s[i]==s[j] && f[i+1][j-1]){
					f[i][j]=1;
				}
			}
			if(f[i][j]==1) res=max(res,l);
		}
	}
	cout << res << endl;
}
