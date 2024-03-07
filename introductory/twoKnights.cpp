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
    for (ll x = 1; x <= n; x++)
    {
        if (x == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (x == 2) {
            cout << 6 << endl;
            continue;
        }
        if (x == 3) {
            cout << 28 << endl;
            continue;
        }
        ll a = x*x;
        ll tot = a * (a-1);
        // 8
        tot -= max((x - 4) * (x - 4) * 8, 0LL);
        // 6
        tot -= max((x - 4) * 4 * 6, 0LL);
        // 4
        tot -= max((x - 3) * 4 * 4 , 0LL);
        // 3
        tot -= 8*3;
        // 2
        tot -= 8;
        cout << tot/2 << endl;
    }
    return 0;
}