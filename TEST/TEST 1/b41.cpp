#include<bits/stdc++.h>
using namespace std;
bool nhay(vector<int> v){
    int check = 0;
    int cuoi = v.size() - 1;
    for(int i = v.size() - 2; i >= 0; i--){
        if(i + v[i] >= cuoi){
            check = 1;
            cuoi = i;
        }
        else check=0;
    }
    return check != 0;
}

int main() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	v.push_back(x);
	}
	if (nhay(v)) cout << "28tech\n";
	else cout << "29tech\n";
    return 0;
}
