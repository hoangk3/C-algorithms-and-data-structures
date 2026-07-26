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
int A[10006];
ll n,k;
void ck(ll i)
{
    if( i > n)
    {
        for ( int p = 1; p <= k; p++)
        {
            cout << A[p];
        }
        cout << endl;
        return;
    }
    for ( int j = A[i - 1] + 1; j <= n - k + i;j++)
    {
        A[i] =j;
        ck(i+1);
    }
}
int main()
{
    cin >> n >> k;
    ck(1);

}
