/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
vector<int> cnt(26);
int n;

void rec(string &s, int curr = 0) {
    // cout << curr << ' ' << s << endl;
    if (s.size() == n) {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i]) {
           cnt[i]--; 
           s.push_back('a' + i);
           rec(s, curr+1);
           s.pop_back();
           cnt[i]++;
        }
    }
}

int fact(int x) {
    return x == 1 ? 1 : x*fact(x-1);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++) cnt[s[i]-'a']++;
    string sln;
    int ans = fact(s.size());
    for (auto c : cnt) {
        if (c) ans /= fact(c);
    }
    cout << ans << endl;
    rec(sln);

    return 0;
}