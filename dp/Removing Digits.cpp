#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const long long M = 1e9+7;

int main() {
	ll n;
	cin >> n;
	vector<int> dp(n+1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		int x = i;
		while (x) {
			int p = x%10;
			x/=10;
			if (p == 0) continue;
			if (i-p >= 0)
				dp[i] = min(dp[i-p], dp[i]);
		}
	}
		cout << dp[n] << endl;
}
