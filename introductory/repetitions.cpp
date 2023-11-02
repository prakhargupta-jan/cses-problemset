/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    int sln = 1;
    int cont = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            cont++;
        } else cont = 1;
        sln = max(sln, cont);
    }
    cout << sln << endl;

    return 0;
}