/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int noPaths = 0;
string path;
bool vis[7][7] = {};

void rec(int x = 0, int y = 0, int i = 0)
{
    if (i >= 48)
    {
        if (x == 6 && y == 0)
            noPaths++;
        return;
    }
    if (x == 6 && y == 0) return;
    if (vis[x][y])
        return;
    if ((y == 0 || y == 6) && x+1 < 7 && x-1 >= 0 && !vis[x+1][y] && !vis[x-1][y]) return;
    if ((x == 0 || x == 6) && y+1 < 7 && y-1 >= 0 && !vis[x][y+1] && !vis[x][y-1]) return;
    if (x+1 < 7 && y+1 < 7 && x-1 >= 0 && y-1 >= 0 && ((vis[x+1][y] && vis[x-1][y] && !vis[x][y+1] && !vis[x][y-1]) || (!vis[x+1][y] && !vis[x-1][y] && vis[x][y+1] && vis[x][y-1]))) return;
    vis[x][y] = true;
    char dir = path[i];
    if (x+1 < 7 && !vis[x+1][y] && (dir == '?' || dir == 'D'))
    {
        rec(x + 1, y, i + 1);
    }
    if (x-1 >= 0 && !vis[x-1][y]  && (dir == '?' || dir == 'U'))
    {
        rec(x - 1, y, i + 1);
    }
    if (y+1 < 7 && !vis[x][y+1]  && (dir == '?' || dir == 'R'))
    {
        rec(x, y + 1, i + 1);
    }
    if (y-1 >= 0 && !vis[x][y-1]  && (dir == '?' || dir == 'L'))
    {
        rec(x, y - 1, i + 1);
    }
    vis[x][y] = false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> path;
    rec();
    cout << noPaths << endl;

    return 0;
}