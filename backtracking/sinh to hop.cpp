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

// ==================== SOLUTION ====================
ll n,k;
int A[100006];
void ppz(ll i)
{
    if ( i > k)
    {
        for( int p = 1; p <= k; p++)
        {
            cout << A[p];
        }
        cout << endl;
        return;

    }
    for( int j = A[i -1 ] + 1 ; j <= n - k + i; j++)
    {
        A[i] = j;
        ppz(i+1);
    }

}
int main()
{
        A[0] = 0;
    cin >> n >> k;
    ppz(1);

}

