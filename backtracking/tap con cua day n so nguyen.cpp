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
vector <ll>A;
vector <ll>a;
ll n;
void ppz(ll i)
{

    if ( i > n)
    {
            if (A.empty())
{
    cout << "{}";
}
        for ( int i = 0; i < A.size(); i++)
        {
            cout << A[i];
        }
        cout << endl;
        return;
    }
    A.push_back(a[i]);
    ppz(i +1);
    A.pop_back();
    ppz(i+1);
}
int main()
{
    a.push_back(0);
    cin >> n;
    for ( int i =1; i <= n;i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    ppz(1);
}
