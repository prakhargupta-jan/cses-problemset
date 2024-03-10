/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    ll p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    ll i = 0, j = n - 1, sln = 0;
    while (i <= j)
    {
        sln++;
        if (i == j)
        {
            break;
        }
        if (p[i] + p[j] > x)
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }
    cout << sln << endl;

    return 0;
}