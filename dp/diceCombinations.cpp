#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define N 1000002 
const long long M = 1e9+7;

ll dp[N] = {};

int main() {
	int n;
	cin >> n;
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i-j < 0) break;
			dp[i] = ( (dp[i]%M) + (dp[i-j]%M))%M;
		}
	}
	cout << dp[n] << endl;
	return 0;
}
