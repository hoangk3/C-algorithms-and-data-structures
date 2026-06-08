/*
 *  Puppy_z4nx
 *  https://puppyz4nx.is-a.dev
 */
#include <bits/stdc++.h>
using namespace std;

// ==================== TYPES ====================

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

using pii = pair<int, int>;
using pll = pair<long long, long long>;

// ==================== CONSTANTS ====================

constexpr int INF = 1e9;
constexpr ll INF64 = 1e18;
constexpr int MOD = 1e9 + 7;

// ==================== SHORTCUTS ====================

#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

// ==================== FAST IO ====================

inline void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ==================== SOLUTION ===================
void ppz(ll a, ll b)
{
    if ( b == 0 )
    {
        cout << a;
        return;
    }
    ppz(b, a%b);

}
int main()
{
    ll a,b;
    cin >> a >> b;
    ppz(a,b);
}
