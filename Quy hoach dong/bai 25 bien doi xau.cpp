#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[105][105];// f[i][j] so cach bien doi tu s[1->i] thanh t[1->j]
int main(){
	string s,t;
	cin >> s >> t;
	int n=s.size(),m=t.size();
	s="0"+s;
	t="0"+t;
	for(int i=1 ; i<=n ; i++){
		f[i][0]=i; // chuyen tu 1 xau i ki tu thanh xau rong thi can toi thieu i buoc
	}
	for(int j=1 ; j<=m ; j++){
		f[0][j]=j;
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(s[i]==t[j]){
				f[i][j]=f[i-1][j-1];
			}
			else{
				f[i][j]=min({
					f[i-1][j-1]+1, // replace
					f[i-1][j]+1, // delete
					f[i][j-1]+1  // insert
				});
			}
		}
	}
	cout << f[n][m] << endl;
}
