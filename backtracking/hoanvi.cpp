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
bool used[10005];
vector<ll>A;
ll n;
void ppz(ll i)
{
    if( i > n)
    {
        for( auto x : A) cout << x << " ";
        cout << endl;
        return;
    }
    for ( int j = 1; j <= n;j++)
    {
        if( used[j]== false)
        {
            A.push_back(j);
            used[j] = true;
            ppz(i+1);
            A.pop_back();
             used[j] = false;
        }
    }

}
int main()
{
    cin >> n;
    ppz(1);
}

