/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    multiset<ll> st;
    ll n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        auto itr = st.upper_bound(k);
        // cout << *itr << endl;
        if (itr == st.end()) {
            st.insert(k);
        } else {
            st.erase(itr);
            st.insert(k);
        }
    }
    cout << st.size() << endl;

    return 0;
}