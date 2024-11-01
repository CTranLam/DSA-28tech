#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--)
	{
	    string s,t;
	    cin >> s >> t;
	    sort(s.begin(),s.end());
	    sort(t.begin() ,t.end());
	    if(s==t) cout << "YES" <<endl;
	    else cout << "NO" <<endl;
	}
}
