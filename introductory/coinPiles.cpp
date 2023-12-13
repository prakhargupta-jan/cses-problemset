/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a&1) {
            a-=1;
            b-=2;
        }
        if (a == 0 && b == 0) {
            cout << "YES" << endl;
            continue;
        }
        if (b > 2*a || b < a/2 || a <= 0 || b <= 0) {
            cout << "NO" << endl;
            continue;
        }
        b-=a/2;
        if (b%3 != 0) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

    }

    return 0;
}