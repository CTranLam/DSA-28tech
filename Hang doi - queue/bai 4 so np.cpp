#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	queue<string> q;
	q.push("1");
	while(n--){ // in ra so np tu 1->n
		string u=q.front(); q.pop();
		cout << u <<" ";
		q.push(u+"0");
		q.push(u+"1");
	}
}
