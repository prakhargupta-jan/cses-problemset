#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int M = 1e9 + 7;
int main() {
	ll n, x;
	cin >> n >> x;
	vector<ll> v(n);
	vector<vector<ll>> dp(2, vector<ll>(x+1));
	for (int i = 0; i < n; i++) cin >> v[i];
	dp[0][0] = dp[1][0] = 1;
	for (int i = n-1; i >= 0; i--) {
		for (int j = 1; j < x+1; j++) {
			if (j-v[i] >= 0) {
				dp[0][j] = (dp[0][j] + dp[0][j-v[i]]) % M;
			}
			if (i != n-1) {
				dp[0][j] = (dp[0][j] + dp[1][j]) % M;
			}
		}
		dp[1] = dp[0];
		dp[0] = vector<ll> (x+1);
		dp[0][0] = 1;
	}
	cout << dp[1][x] << endl;
	return 0;
}
