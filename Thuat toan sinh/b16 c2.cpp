#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	int a[k + 1] = {0};
	int d[1001] = {0};
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
		d[a[i]] = 1;
	}
	int cnt = 0;
	int i = k; 
	while (i >= 1 && a[i] == n - k + i) --i;
	if (i == 0) {
		cout << k << endl;
		return 0;
	}
	else {
		++a[i];
		for (int j = i + 1; j <= k; j++) a[j] = a[j-1] + 1;
	}
	for (int i = 1; i <= k; i++) {
		if (!d[a[i]]) ++cnt;
	}
	cout << cnt << endl;
	return 0;
}

