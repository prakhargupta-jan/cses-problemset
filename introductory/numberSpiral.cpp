/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll findValue(ll row, ll col) {
    ll m = max(row, col);
    ll val = m*m+1;
    if (row == col)
        return val+m;
    else if (row > col)
        return val + col;
    return val+2*m-row;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll mx = max(x-1, y-1)-1;
        ll sln = 0;
        if (mx&1)
            sln = findValue(x-1, y-1);
        else
            sln = findValue(y-1, x-1);
        cout << sln << endl;
    }

    return 0;
}