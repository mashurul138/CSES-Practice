#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll binaryExp(ll a, ll b, ll m)
{
    ll res = 1;
    a = a % m;
    while (b)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

ll ABC(ll a, ll b, ll c, ll m)
{
    ll power = binaryExp(b, c, m - 1);
    return binaryExp(a, power, m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << ABC(a, b, c, 1000000007) << endl;
    }

    return 0;
}