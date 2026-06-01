#include<bits/stdc++.h>
using namespace std;
int n;
void Try(int n)
{
    if ( n == 0) return;
    cout << n << " ";
    Try(n-1);
}
int main()
{
    cin >> n;
     Try(n);
}

