#include<bits/stdc++.h>
#define ll long long
using namespace std;
void ppz(ll a , ll c, ll n)
{
    ll b = 6 - a - c;
    if ( n == 0) return;
    ppz(a, b, n- 1);
    cout << a << " " << c << endl;
    ppz(b,c, n -1);


}
int main()
{
    ll n;
    cin >> n;
    ppz(1,3,n);
}
