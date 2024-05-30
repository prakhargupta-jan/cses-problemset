#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(ll m, vector<ll> &k, ll t) {
    ll made = 0;
    for (auto a : k) {
        made += (m / a);
        if (made >= t)
            return true;
    }
    return false;
}

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> k(n);
    for (ll i = 0; i < n; i++)
        cin >> k[i];
    ll l = 0, r = LONG_LONG_MAX;
    ll ans = LONG_LONG_MAX;
    while (l <= r) {
        ll m = (l+r)/2;
        if (check(m, k, t)) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
	cout << ans << endl;

    return 0;
}
