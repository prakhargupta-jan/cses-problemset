/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (n < 4) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n == 4) {
        cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3 << endl;
    }
    for (int i = 1; i <= n/2; i++) {
        cout << i << ' ';
        if (n&1)
        cout << i + n/2+1 << ' ';
        else cout << i + n/2 << endl;
    }
    if (n&1) cout << n/2+1 << endl;

    return 0;
}