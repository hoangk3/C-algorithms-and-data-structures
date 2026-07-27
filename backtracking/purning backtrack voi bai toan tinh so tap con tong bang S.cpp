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
vector<ll>A;
vector<ll>a;
ll n,s;
bool gg = false;
void ppz( ll i, ll tong )
{
    if ( tong > s)
    {
        return;
    }
    if ( tong == s)
    {
        gg = true;
        for ( auto x : A) cout << x << " ";
            cout << endl;
            return;
    }
    if ( i > n) return;

        A.push_back(a[i]);
        ppz(i+1, tong + a[i]);
        A.pop_back();
        ppz(i+1, tong);

}
int main()
{
    cin >> n >> s;
    a.push_back(0);
    for (int i = 0; i < n;i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    ppz(1,0);
    if ( gg == false)
    {
        cout << "-1";
    }

}
