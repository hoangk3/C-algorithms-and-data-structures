#include <bits/stdc++.h>
using namespace std;

int n;

int Try(int n)
{
    if(n == 0) return 0;

    long long sum = n%10 + Try(n/10);

    return sum;
}

int main()
{
    cin >> n;
    cout << Try(n);
}

