#include <bits/stdc++.h>
using namespace std;
int n;
int gg ( int n)
{
    if ( n < 10 ) return 1;
    return 1 + gg(n/10);


}
int main()
{
    cin >> n;
    cout << gg(n);
}
