#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int cot[100],xuoi[100],nguoc[100]; // danh dau cot nay, duong cheo nay da dc dung chua
vector<vector<int>> ans;
vector<int> v;
void Try(int i){// bat dau tu hang 1
    if(i==n+1){ // den hang cuoi cung
//    	ans.push_back(v);
        for(int t : v){
        	cout << t <<" ";
		}
		cout << endl;
	}
	for(int j=1 ; j<=n ; j++){
		if(cot[j]==0 && xuoi[i-j+n]==0 && nguoc[i+j-1]==0){
			cot[j]=1;
			v.push_back(j);
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
			
			Try(i+1);// hang i+1;
			cot[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
			v.pop_back();
		}
	}
}
int main(){
	cin >> n;
	Try(1);
//	for(auto x : ans){
//		for(int t : x){
//			cout << t <<" ";
//		}
//		cout << endl;
//	}
}
