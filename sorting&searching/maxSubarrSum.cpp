/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll sm = 0, sln = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        sm += a[i];
        sln = max(sln, sm);
        if (sm < 0) sm = 0;
    }
    cout << sln << endl;
    return 0;
}