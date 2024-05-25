#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	ll sm = 0, mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sm += v[i];
		mx = max(mx, v[i]);
	}
	sm -= mx;
	if (mx > sm) {
		cout << sm + mx + mx-sm << endl;
	} else {
		cout << sm + mx << endl;
	}
	return 0;
}
