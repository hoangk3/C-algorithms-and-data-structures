
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
int A[10005];
bool used[10006];
ll n,k;
void ppz(ll i)
{
    if ( i > k)

    {
        for(int i = 1; i <=k; i++)
    {
        cout << A[i];
    }
    cout << endl;
    return;
    }
    for(int j = 1; j <= n; j++)
    {
        if(used[j] == false)
        {


        A[i] = j;
        used[j] = true;
        ppz(i+1);
        used[j] = false;
        }
    }
}
int main()
{
    A[0] = 0;
    cin >> n >> k;
    ppz(1);
}


