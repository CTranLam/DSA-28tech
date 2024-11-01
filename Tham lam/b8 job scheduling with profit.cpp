#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct job{
	int id,deadline,profit;
};
bool cmp(job a,job b){
	return a.profit > b.profit;
}
int main(){
	int n;
	cin >> n;
	job a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i].id >>a[i].deadline >> a[i].profit;
	}
	sort(a,a+n,cmp);// xep theo profit tang dan
	int used[n]={0};// danh dau thoi diem nay da sd chua
	int ans=0;
	for(int i=0; i<n ; i++){
		for(int j=a[i].deadline-1 ; j>=0 ; j--){ // lay deadline cang lon cang tot de danh vi tri dau cho nhung deadline nho hon
		    if(used[j]==0){
			    used[j]=1;
			    ans+=a[i].profit;
			    break;
		    }
		}
	}
	cout << ans << endl;
}
