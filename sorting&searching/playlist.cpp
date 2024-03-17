/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n, sln = 0, x = 0;
    cin >> n;
    vector<ll> k(n);
    for (int i = 0; i < n; i++) cin >> k[i];
    unordered_set<ll> us;
    for (int i = 0; i < n; i++) {
        while (us.count(k[i])) {
            us.erase(k[x]);
            x++;
        }
        us.insert(k[i]);
        sln = max(sln, i-x+1);
    }
    cout << sln << endl;

    return 0;
}