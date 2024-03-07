/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    vector<int> d(n), a(m);
    for (ll i = 0; i < n; i++) cin >> d[i];
    for (ll i = 0; i < m; i++) cin >> a[i];
    sort(d.begin(), d.end(), greater<ll>());
    sort(a.begin(), a.end(), greater<ll>());
    ll i = 0, j = 0, sln = 0;
    while (i < n && j < m) {
        ll x = d[i], y = a[j];
        if (y+k >= x && y-k <= x) {
            sln++;
            i++;
            j++;
        } else if (y+k < x) {
            i++;
        } else {
            j++;
        }
    }
    cout << sln << endl;
    return 0;
}