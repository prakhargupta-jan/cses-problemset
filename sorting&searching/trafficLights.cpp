/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll x, n;
    cin >> x >> n;
    set<ll> st;
    multiset<ll> lengths;
    lengths.insert(x);
    ll p;
    // cout << x << ' ' << n << endl;
    for (int i = 0; i < n; i++) {
        cin >> p;
        auto l = st.lower_bound(p), r = st.upper_bound(p);
        auto temp = l;
        if (temp != st.begin())
            temp--;
        lengths.erase(lengths.find( (r == st.end() ? x : *r) - (l == st.begin() ? 0 : *temp) ));
        if (l == st.begin()) {
            lengths.insert(p);
        } else {
            lengths.insert(p-*temp);
        }
        if (r == st.end()) {
            lengths.insert(x-p);
        } else {
            lengths.insert(*r-p);
        }
        st.insert(p);
        cout << *lengths.rbegin() << ' ';
    }
    cout << endl;
    return 0;
}