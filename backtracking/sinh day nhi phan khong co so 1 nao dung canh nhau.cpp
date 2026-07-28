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
vector<ll>B;
ll n,k;
bool gg = false;
void ppz( ll i)
{
    if(i > n)
    {
        for ( auto x : A) cout << x;
        cout << endl;
        return;
    }
        A.push_back(0);
        ppz(i+1);
        A.pop_back();
    if( A.empty() || A.back() != 1)
    {
        A.push_back(1);
        ppz(i+1);
        A.pop_back();
    }


}
int main()
{
    cin >> n;

   ppz(1);

}



