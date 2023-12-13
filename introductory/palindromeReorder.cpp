/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string st;
    cin >> st;
    vector<int> c(26);
    for (int i = 0; i < st.size(); i++)
    {
        c[st[i] - 'A']++;
    }
    bool check = false, burp = false;
    for (auto &a : c)
    {
        if (a & 1)
        {
            if (check) {
                burp = true;
                break;
            }
            check = true;
        }
    }
    if (check and burp) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string s = "";
    char b = '-';
    for (int i = 0; i < 26; i++) {
        if (c[i]%2) b = 'A'+i;
        string temp(c[i]/2, 'A'+i);
        s+=temp;
    }
    string sr = s;
    reverse(s.begin(), s.end());
    if (b == '-') {
        cout << sr << s << endl;
    } else {
        cout << sr << b << s << endl; 
    }

    return 0;
}