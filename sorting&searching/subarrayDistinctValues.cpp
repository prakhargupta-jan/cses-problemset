#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    unordered_map<ll, ll> um;
    ll n, k;
    cin >> n >> k;
    ll l = 0, sln = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        um[v[i]]++;
        while ((ll)um.size() > k) {
            if (um[v[l]] == 1)
                um.erase(v[l]);
            else
                um[v[l]]--;
			l++;
        }
		sln += i-l+1;
    }
	cout << sln << endl;
    return 0;
}
