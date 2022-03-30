#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "9"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x, i) ((x) & MASK(i))
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define all(x) x.begin(), x.end()
// const int MAXN = ;
const int INF = 1e9 + 7;
bool cmp(const string &x, const string &y)
{
    if((int) x.size() == (int) y.size())
        return x < y;
    return ((int) x.size() < (int) y.size());
}
void Print(const set <string> &ans)
{
    vector <string> save;
    for(auto p : ans)
        save.push_back(p);
    sort(all(save), cmp);
    for(auto p : save)
        cout << p << '\n';
}
set <string> ans;
void create(int N)
{
    if(N == 0)
    {
        ans.insert("");
        return ;
    }
    if(N % 2)
    {
        create(N - 1);
        return ;
    }
    create(N - 2);
    set <string> temp = ans;
    for(auto x : temp)
    {
        if(x.size() + 2 == N)
            ans.insert('(' + x + ')');
        for(auto y : temp)
            if(x.size() + y.size() == N)
                ans.insert(x + y);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    create(N);
    Print(ans);
    return 0;
}