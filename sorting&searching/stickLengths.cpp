/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

// 1. Ternary Search
// 2. Greedy
// Pending

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, a = INT_MAX, b = INT_MIN;
    cin >> n;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        a = min(a, p[i]);
        b = max(b, p[i]);
    }
    ll sln = -1;
    while (a <= b) {
        ll md = (a+b)/2;
        int check = (p, a, b);
        if (check == 0) break;
        else if (check == -1) a = md+1; 
        else b = md-1;
    }
    return 0;
}