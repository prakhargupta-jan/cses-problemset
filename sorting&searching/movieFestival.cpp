/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll> (2));
    for (int i = 0; i < n; i++) cin >> v[i][0] >> v[i][1];
    sort(v.begin(), v.end(), [](const vector<ll> &a, const vector<ll> &b) {
        return a[1] < b[1];
    });
    ll e = 0, sln = 0;
    for (int i = 0; i < n; i++) {
        if (v[i][0] >= e) {
            sln++;
            e = v[i][1];
        }
    }
    cout << sln << endl;

    return 0;
}