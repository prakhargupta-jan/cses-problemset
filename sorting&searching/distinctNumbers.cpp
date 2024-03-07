/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
// 1. sort
// 2. set
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll temp;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    cout << st.size() << endl;

    return 0;
}