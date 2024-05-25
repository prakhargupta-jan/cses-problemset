#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	unordered_map<int, int> um;
	um[0] = 1;
	ll sm = 0, sln = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sm += v[i];
		sm = (sm + n)%n;
		sln += um[(sm + n)%n];
		um[(sm + n)%n]++;
	}
	cout << sln << endl;
	return 0;
}
