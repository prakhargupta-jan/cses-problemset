/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Couldn't come up with an approach by myself.
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    ll sln = 1;
    for (auto &a : x) {
        if (sln >= a) sln+=a;
        else break;
    }
    cout << sln << endl;
    return 0;
}