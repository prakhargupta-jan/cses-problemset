#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n, x, sln = 0, sm = 0;
    cin >> n >> x;
    vector<ll> v(n);
    unordered_map<ll, ll> um;
    um[0] = 1;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sm += v[i];
        if (um.count(sm - x))
            sln += um[sm - x];
        if (um[sm])
            um[sm]++;
        else
            um[sm] = 1;
    }
    cout << sln << endl;
    return 0;
}
