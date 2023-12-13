/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    if ((n * (n + 1) / 2) % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    ll sm = (n * (n + 1) / 2) / 2;
    ll i;
    for (i = n; i > 0; i--)
    {
        if (sm <= i)
            break;
        sm -= i;
    }
    cout << n-i+1 << endl;
    cout << sm << ' ';
    for (ll j = i+1; j <= n; j++) cout << j << ' ';
    cout << endl;
    cout << i - 1 << endl;
    for (ll j = 1; j <= i; j++)
    {
        if (j == sm)
            continue;
        cout << j << ' ';
    }
    cout << endl;
    return 0;
}