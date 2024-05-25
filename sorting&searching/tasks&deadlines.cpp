#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<vector<long long>> v(n, vector<long long> (2));
	for (long long i = 0; i < n; i++) {
		cin >> v[i][0] >> v[i][1];
	}
	sort(v.begin(), v.end(), [](vector<long long> &a, vector<long long> &b) {
	  return a[0] < b[0];
	});
	long long curr = 0, sln = 0;
	for (long long i = 0; i < n; i++) {
		int a = v[i][0], d = v[i][1];
		curr += a;
		sln += d-curr;
	}
	cout << sln << endl;
	return 0;
}
