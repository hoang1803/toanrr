#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;

#define task "5"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x, i) ((x)&MASK(i))
#define SET_ON(x, i) ((x) | MASK(i))
#define SET_OFF(x, i) ((x) & ~MASK(i))
#define all(x) x.begin(), x.end()
// const int MAXN = ;
const int INF = 1e9 + 7;
vector<string> save;
int N;
void create(int i, string s = "")
{
    if (i > N)
        return;
    if(i == 0)
    {
        save.push_back("");
        create(i + 1, "");
        create(i + 2, "");
        return ;
    }
    if(i == 1)
    {
        save.push_back("0");
        save.push_back("1");
        create(i + 2, "0");
        create(i + 2, "1");
        return ;
    }
    string a = '0' + s + '0';
    string b = '1' + s + '1';
    save.push_back(a);
    create(i + 2, a);
    save.push_back(b);
    create(i + 2, b);
}
bool cmp(const string &x, const string &y)
{
    if((int) x.size() == (int) y.size())
        return x < y;
    return ((int) x.size() < (int) y.size());
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    create(0);
    sort(all(save), cmp);
    for(auto p : save)
        cout << p << '\n';
    return 0;
}