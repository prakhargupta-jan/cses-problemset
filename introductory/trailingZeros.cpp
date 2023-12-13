/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    ll a = 5;
    ll sln = 0;
    while (a <= n) {
        sln += n/a;
        a*=5;
    }
    cout << sln <<endl;
    return 0;
}