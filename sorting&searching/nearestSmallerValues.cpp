#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll i = 0; i < n; i++) cin >> v[i];
	stack<ll> st;
	for (ll i = 0; i < n; i++) {
		while (!st.empty() && v[st.top()] >= v[i]) st.pop();
		if (st.empty()) cout << 0 << ' ';
		else cout << st.top() + 1 << ' ';
		st.push(i);
	}
	cout << endl;
	return 0;
}
