/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n, m;
    cin >> n >> m;
    multiset<ll> us;
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        us.insert(temp);
    }
    for (int i = 0; i < m; i++) {
        ll t;
        cin >> t;
        auto it = us.upper_bound(t);
        if (it == us.begin()) {
            cout << -1 << endl;
            continue;
        } else {
            it--;
            cout << *it << endl;
            us.erase(it);
        }
    }
    return 0;
}