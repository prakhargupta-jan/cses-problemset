/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
ll noWays = 0;
vector<string> v(8);
vector<vector<bool>> board(8, vector<bool> (8, false));

bool underAttack(int i, int j) {
    if (v[i][j] == '*') return true;
    for (int x = 0; x < 8; x++) {
        if (board[i][x] || board[x][j]) return true;
    }
    for (int x = abs(i-j); x < 8; x++) {
        if (i > j) {
            if (board[x][x-abs(i-j)]) return true;
        }
        else if (board[x-abs(i-j)][x]) return true;
    }
    int x, y;
    if (7-j >= i) {
        x = 0, y = j+i;
    } else {
        x = i+j-7, y = 7;
    }
    for (; x < 8 and y >= 0; x++, y--) {
        if (board[x][y]) return true;
    }
    return false;
}

void rec(int y = 0, int cnt = 8) {
    if (cnt == 0) {
        noWays++;
        return;
    }
    for (int x = 0; x < 8; x++) {
        if (underAttack(y, x))
            continue;
        board[y][x] = true;
        rec(y+1, cnt-1);
        board[y][x] = false;
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    for (int i = 0; i < 8; i++) cin >> v[i];
    rec();
    cout << noWays << endl;
    return 0;
}