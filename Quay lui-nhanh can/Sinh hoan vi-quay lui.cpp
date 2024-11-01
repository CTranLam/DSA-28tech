#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100],n;
int used[100]; // danh dau lai do moi ptu chi duoc dung 1 lan
void Try(int i){
	for(int j=1 ; j<=n ; j++){
		if(used[j]==0){
		    a[i]=j;
		    used[j]=1;
		    if(i==n){
			    for(int i=1 ; i<=n ; i++){
				    cout << a[i] <<" ";
			    }
			    cout << endl;
		    }
		    else{
			    Try(i+1);
		    }
		    used[j]=0; // backtrack ptu de nhanh sau con dung lai
		}
	}
}
int main(){
	cin >> n;
	Try(1);
}
