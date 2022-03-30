#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "2"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x, i) ((x) & MASK(i))
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define all(x) x.begin(), x.end()
// const int MAXN = ;
const int INF = 1e9 + 7;
int count(int i, const string &s)
{
    if(i == (int) s.size())
        return 0;
    if(s[i] != '0' && s[i] != '1')
    {
        cout << "Error";
        exit(0);
    }
    return count(i + 1, s) + s[i] - '0';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << count(0, s);
    return 0;
}