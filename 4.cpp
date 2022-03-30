#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "4"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x, i) ((x) & MASK(i))
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define all(x) x.begin(), x.end()
// const int MAXN = ;
const int INF = 1e9 + 7;
string Reverse(int i, const string &s)
{
    if(i == (int) s.size())
        return "";
    return Reverse(i + 1, s) + s[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin, s);
    cout << Reverse(0, s);
    return 0;
}
