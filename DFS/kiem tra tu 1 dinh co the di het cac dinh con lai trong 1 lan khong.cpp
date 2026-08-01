#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<long long, long long>;

#define pb push_back;
#define fi first;
#define se second;
#define all(x) (x), begins(), (x).end()

inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
//ppz4nx solution
vector<ll> adj[10005];
bool visited[10005];
ll gg = 0;
void dfs(ll u)
{
    visited[u] = true;
    for ( auto v: adj[u])
    {
        if(visited[v]== false)
        {
            dfs(v);
        }
    }

}
int main()
{
    bool check = false;
    ll n,m;
    cin >> n >> m;
    for ( ll i = 1; i <= m; i++)
    {
        ll u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for ( ll i = 1; i <= n;i++)
    {
        if ( visited[i]== false)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
