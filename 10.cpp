#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "10"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x, i) ((x) & MASK(i))
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define all(x) x.begin(), x.end()
// const int MAXN = ;
const int INF = 1e9 + 7;
long long gcd(long long a, long long b)
{
    if(a == 0 && b == 0)
    {
        cout << "Error";
        exit(0);
    }
    if(a > b)
        return gcd(b, a);
    if(a == 0)
        return b;
    if(a % 2 == 0 && b % 2 == 0)
        return 2 * gcd(a / 2, b / 2);
    if(a % 2 == 0 && b % 2 == 1)
        return gcd(a / 2, b);
    return gcd(a, b - a);    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}