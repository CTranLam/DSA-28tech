#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[1000],hang[1000],xuoi[1000],nguoc[1000];
int ans=0;// dem so luong cau hinh
void Try(int i){ // xet tu cot so 1;
	for(int j=1 ; j <=n ; j++){
		if(hang[j]==0 && xuoi[i-j+n]==0&& nguoc[i+j-1]==0){
			a[i]=j;
			hang[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
			if(i==n){ // quay lui den cot cuoi cung
				++ans;
			}
			else{
				Try(i+1);
			}
			hang[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
		}
	}
}
int main(){
	cin >> n;
	Try(1);// quay lui tu cot 1
	cout << ans << endl;
}
