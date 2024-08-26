#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(vector<ll> &v, ll m, ll k) {
    ll sm = 0;
    for (int i = 0; i < (ll)v.size(); i++) {
		int a = v[i];
		if (a > m) return false;
        if (sm + a > m) {
            k--;
            sm = 0;
        }
        sm += a;
        if (k < 0)
            return false;
    }
    return true;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
	k--;

    ll l = 0, r = LONG_LONG_MAX - 1, sln = 0;
    while (l <= r) {
        ll m = l - (l - r) / 2;
        bool c = check(v, m, k);
        if (c) {
            sln = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << sln << endl;
    return 0;
}
