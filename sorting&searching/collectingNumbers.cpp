/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// initially misintrepreted the problem
// fixed the second time
// can save on time by using a array which stores indexes for each element since elements are numbers from 1-n non-repeating.
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    set<ll> st;
    ll n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        if (st.count(x[i]-1)) {
            st.erase(x[i]-1);
        }
        st.insert(x[i]);
    }
    std::cout << st.size() << endl;

    return 0;
}