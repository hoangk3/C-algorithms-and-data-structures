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
ll u,v;
vector<ll> adj[10005];
bool visited[10006];
ll gg =0;
void dfs( int u)
{
    visited[u] = true;
    gg++;
    for ( auto v : adj[u])
    {
        if ( visited[v] == false)
        {
            dfs(v);
        }
    }

}
int main()
{
    ll n,m;
    cin >> n >> m;
    for ( ll i = 1; i <= m;i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    cout << gg;
}
