#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define maxn 1000006
#define base 9997
#define pd pair<ll,ll>
#define bitmask(mask,i) ((mask>>i)&1)
#define __KezzyBlue__ main()
ll tonguoc(ll x)
{
    ll t = 1 + x;
    for(ll i = 2; i <= sqrt(x); i++)
        if(x % i == 0)
        t += i + (x / i);
    if((ll)sqrt(x) * (ll)sqrt(x) == x)
        t -= sqrt(x);
    return t;
}
__KezzyBlue__
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x, y;
    cin >> x >> y;
    ll tongx = tonguoc(x);
    ll tongy = tonguoc(y);
        cout << tonguoc(x) << " " << tonguoc(y);
}
//               _,........__
//            ,-'            "`-.
//          ,'                   `-.
//        ,'                        \
//      ,'                           .
//      .'\               ,"".       `
//     ._.'             / |  `       \
//     |   |            `-.'  ||       `.
//     |   |            '-._,'||       | \
//     .`.,'             `..,'.'       , |`-.
//     l                       .'`.  _/  |   `.
//     `-.._'-   ,          _ _'   -" \  .     `
//`."""""'-.`-...,---------','         `. `....__.
//.'        `"-..___      __,'\          \  \     \
//\_ .          |   `""""'    `.           . \     \
//  `.          |              `.          |  .     L
//    `.        |`--...________.'.        j   |     |
//      `._    .'      |          `.     .|   ,     |
//         `--,\       .            `7""' |  ,      |
//            ` `      `            /     |  |      |    _,-'"""`-.
//             \ `.     .          /      |  '      |  ,'          `.
//              \  v.__  .        '       .   \    /| /              \
//               \/    `""\"""""""`.       \   \  /.''                |
//                `        .        `._ ___,j.  `/ .-       ,---.     |
//                ,`-.      \         ."     `.  |/        j     `    |
//               /    `.     \       /         \ /         |     /    j
//              |       `-.   7-.._ .          |"          '         /
//              |          `./_    `|          |            .     _,'
//              `.           / `----|          |-............`---'
//                \          \      |          |
//               ,'           )     `.         |
//                7____,,..--'      /          |
//                                  `---.__,--.'


