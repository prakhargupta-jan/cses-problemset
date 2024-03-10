/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i] >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0;
    ll cnt = 0, sln = 0;
    while (i < n && j < n) {
        if (a[i] == b[j]) {
            i++, j++;
            continue;
        } else if (a[i] > b[j]) {
            cnt--;
            j++;
        } else {
            cnt++;
            i++;
        }
        sln = max(sln, cnt);
    }
    cout << sln << endl;

    return 0;
}