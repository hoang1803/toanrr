#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "1"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x, i) ((x)&MASK(i))
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define all(x) x.begin(), x.end()
const int INF = 1e9 + 7;
void solve(int x, string s)
{
    if (x % 2)
        solve(x - 1, s);
    else
    {
        cout << s << '\n';
        if (x == 0)
            return;
        solve(x - 2, '0' + s + '1');
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen(task ".inp", "r"))
    {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }
    int x;
    cin >> x;
    solve(x, "");
    return 0;
}