/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll mnDgN(ll n) {
    if (n == 0)
        return 0;
    ll ans = 1;
    while (n > 1) {
        ans *= 10;
        n--;
    }
    return ans;
}

ll mxDgN(ll n) {
    if (n == 0)
        return 0;
    ll ans = 0;
    while (n > 0) {
        ans = ans * 10 + 9;
        n--;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q;
    cin >> q;
    while (q--) {
        ll k;
        cin >> k;
        ll i = 1;
        ll x = 10, prev = 0;
        while (k > x) {
            i++;
            prev = x;
            // cout << 'a' << x << endl;
            x = (x) + (mxDgN(i) - mnDgN(i)) * i;
            // cout << 'b' << x << endl;
        }
        x = prev;
        k -= x;
        // cout << "info: " << i << ' ' << k << ' ' << x << endl;
        if (i == 1) {
            cout << k << endl;
            continue;
        }
        ll bif = i * mnDgN((i - (k % i)));
        if (bif == 0)
            cout << "BITCH" << endl;
        if (k % i == 0)
            cout << k / bif + 1 << endl;
        else
            cout << k / bif << endl;
    }

    return 0;
}
