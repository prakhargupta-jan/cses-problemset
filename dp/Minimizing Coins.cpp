#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define N 1000002 
const long long M = 1e9+7;

ll dp[N] = {};

int main() {
	ll n, x;
	cin >> n >> x;
	vector<ll> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	vector<ll> dp(x+2, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (i-v[j] >= 0) {
				dp[i] = min(dp[i-v[j]]+1, dp[i]);
			}
		}
	}
	cout << (dp[x] == INT_MAX ? -1 : dp[x]) << endl;
	return 0;
}
