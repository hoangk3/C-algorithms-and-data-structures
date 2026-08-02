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
vector<ll> adj[10006];
bool visited[10005];
ll parten[10005];
ll t,s;
void dfs( ll u)
{
    visited[u] = true;
    for ( auto v : adj[u])
    {
        if ( visited[v] == false)
        {
            parten[v] = u;
            dfs(v);

        }
    }
}
int main()
{
    ll cur;
    vector<ll> path;

    ll n,m;
    cin >> n >> m;
    for ( ll i = 1; i <= m; i++)
    {
        ll u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin >> s >> t;
     parten[s] = 0;
    dfs(s);
    cur = t;

    if ( visited[t])
    {
      while( cur != 0)
    {
        path.push_back(cur);
        cur = parten[cur];
    }
        reverse(path.begin(), path.end());
        for ( auto x : path)
        {
            cout << x << " ";
        }

    }
    else
    {
        cout << "-1";
    }
}

