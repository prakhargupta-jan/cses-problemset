/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll sln = __LONG_LONG_MAX__;
void rec(vector<ll> &p, ll totSm, ll i = 0, ll sm = 0)
{
    if (i >= p.size())
    {
        sln = min(sln, abs(abs(totSm-sm) - sm));
        return;
    }
    rec(p, totSm, i + 1, sm);
    rec(p, totSm, i + 1, sm + p[i]);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> p(n);
    ll totSm = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        totSm += p[i];
    }
    rec(p, totSm);
    cout << sln << endl;

    return 0;
}