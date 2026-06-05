#include<bits/stdc++.h>
using namespace std;
void ppz( int n)
{
    if ( n < 10 )
    {
        cout << n;
        return;
    }
    cout << n%10;
    ppz(n/10);
}
int main()
{
    int n;
    cin >> n;
    ppz(n);
}
