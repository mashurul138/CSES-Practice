#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;
const int N = 1e6;
using ll = long long;

vector<ll> fact(N + 1), invFact(N + 1);

ll modPow(ll a, ll b)
{
    a = a % MOD;
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void precalc()
{
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % MOD;
    invFact[N] = modPow(fact[N], MOD - 2);
    for (int i = N; i > 0; i--)
        invFact[i - 1] = invFact[i] * i % MOD;
}

ll nCr(ll a, ll b)
{
    if (b < 0 || b > N)
        return 0;
    return fact[a] * invFact[a - b] % MOD * invFact[b] % MOD;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    precalc();
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << nCr(a, b) << endl;
    }

    return 0;
}