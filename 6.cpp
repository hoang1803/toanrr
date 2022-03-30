#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "6"
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
        cout << "Error";
        exit(0);
    } 
    if(N == 1)
    {
        ans.insert("0");
        return ;
    }
    create(N - 1);
    set <string> temp;
    for(auto x : ans)
        for(auto y : ans)
        {
            int a = x.size();
            int b = y.size();
            if(a + b + 1 == N)
            {
                ans.insert("1" + x + y);
                ans.insert(x + "1" + y);
                ans.insert(x + y + "1");
                continue ;
            }
            if(a + b == N)
            {
                ans.insert(x + y);
                continue ; 
            }
            if(a + b > N)
                break ;
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