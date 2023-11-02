/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int xr = 0;
    for (int i = 1; i < n; i++) {
        xr^=i;
        int x; cin >> x;
        xr ^= x;
    }
    xr ^= n;
    cout << xr << endl;

    return 0;
}