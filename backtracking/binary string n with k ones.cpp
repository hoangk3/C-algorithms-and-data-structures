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
int A[10006];
ll n,k;
void Try( ll i)
{


ll dem = 0;
if ( i > n)
{
    for( int p =1; p <= n; p++)
    {
        if ( A[p] == 1) dem++;
    }
    if ( dem == k)

    {
        for( int k = 1; k<= n; k++)
    {
        cout << A[k];
    }
    cout << endl;
    }

    return;

}
for ( int j = 0; j <= 1; j++)
{
    A[i] = j;
    Try(i+1);
}
}
int main()
{
    cin >> n >> k;
    Try(1);
}



