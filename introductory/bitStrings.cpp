/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

const int M = 1e9+7;
ll pw(ll n, ll a = 2) {
    if (n == 1) return a;
    if (n == 0) return 1;
    if (n&1) return (a*pw(n/2, (a*a)%M))%M;
    return pw(n/2, (a*a)%M);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    cout << pw(n) << endl;
    return 0;
}