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
int A[10005];
int pos[10006];
ll n;
bool check(ll row,ll col) // row la hang ngang 
                        // col la cot doc 
{
    for( ll r = 1; r < row; r++)
    {
        if ( pos[r] == col)
        {
            return false;
        }
        if( abs(r-row) == abs(pos[r]- col))
        {
            return false;
        }
    }
    return true;

}
bool gg = false;
ll cnt = 0;
void ppz( ll row)
{
    if ( row > n)
    {
        gg = true;
        cnt++;
        return;
    }
for ( ll col = 1; col <= n; col++)
{
    if ( check(row,col))
    {
        pos[row] = col;
        ppz(row+1);
    }
}
}
int main()
{
    cin >> n;
    ppz(1);
    cout << cnt;
}
