/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    while (n != 1) {
        cout << n << ' ';
        if (n%2)
            n = n*3 + 1;
        else n/=2;
    }
    cout << 1 << endl;

    return 0;
}