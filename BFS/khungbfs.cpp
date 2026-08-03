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
queue<ll> q;
vector<ll> adj[100005];
bool visited[100005];
void bfs( ll u)
{
    visited[u] = true;
    q.push(u);
    while( !q.empty())
    {
        int w = q.front();
        q.pop();
        for( auto v : adj[w])
        {
            if ( !visited[v])
            {
                visited[v] = true;
                queue.push(v);

            }
        }
    }

}

