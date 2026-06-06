#include<bits/stdc++.h>
using namespace std;
int A[100006];
bool ppz( int n)
{
    if ( n < 10 ) return true;
    int p = 1;

while(p * 10 <= n)
{
   p *= 10;
}
if( n% 10 != n/p)
{
    return false;
}
 return ppz((n/10)%(p/10));



}
int main()
{
    int n;
    cin >> n;
    if(ppz(n))
    cout << "YES";
else
    cout << "NO";
}
