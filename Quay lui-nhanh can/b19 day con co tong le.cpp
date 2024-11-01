#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[30];
int cur_sum=0;
int used[30];
vector<int> v;
vector<vector<int>> vs;
void Try(int i){
	if(cur_sum%2==1){
		vector<int> vt;
		for(int i=0 ; i<v.size() ; i++){
			vt.push_back(a[v[i]]);
		}
		vs.push_back(vt);
	}
	for(int j=i ; j<=n ; j++){
		if(used[j]==0){
		    cur_sum+=a[j];
		    used[j]=1;
		    v.push_back(j);
		    Try(j+1);
		    v.pop_back();
		    used[j]=0;
		    cur_sum-=a[j];
		}
	}
}
int main(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	Try(1);
	if(vs.size()==0){
		cout << "NOT FOUND";
		return 0;
	}
	sort(vs.begin() ,vs.end());
	for(auto x : vs){
		for(int t : x){
			cout << t <<" ";
		}
		cout << endl;
	}
}
