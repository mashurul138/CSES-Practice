#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll modPow(ll a, ll b)
{
    ll res = 1;
    a = a % MOD;
    while (b)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll invN(ll n)
{
    return modPow(n, MOD - 2);
}

void divisorAnalysis()
{
    int n;
    cin >> n;
    ll num = 1, divisor = 1, sum = 1, invDiv = 1, product = 1;
    while (n--)
    {
        int x, k;
        cin >> x >> k;
        num = num * modPow(x, k) % MOD;
        divisor = divisor * (k + 1) % MOD;
        sum = (sum * (modPow(x, k + 1) - 1) % MOD) * invN(x - 1) % MOD;
        product = modPow(product, k + 1) * modPow(modPow(x, k * (k + 1) / 2), invDiv) % MOD;
        invDiv = invDiv * (k + 1) % (MOD - 1);
    }
    cout << divisor << " " << sum << " " << product << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    divisorAnalysis();
    return 0;
}