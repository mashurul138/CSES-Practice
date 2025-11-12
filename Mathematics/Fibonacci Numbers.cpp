#include <bits/stdc++.h>
using namespace std;

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
const ll MOD = 1e9 + 7;

pair<ll, ll> fastDoubling(ll n)
{
    if (n == 0)
        return {0, 1};
    auto [a, b] = fastDoubling(n >> 1);
    ll c = a * ((2 * b % MOD - a + MOD) % MOD) % MOD; // c = 2ab - a^2
    ll d = ((a * a % MOD) + (b * b % MOD)) % MOD;     // d = a^2 + b^2
    if (n & 1)
        return {d, (c + d) % MOD};
    return {c, d};
}
ll fib(ll n)
{
    return fastDoubling(n).first % MOD;
}
void solve()
{
    ll n;
    cin >> n;
    cout << fib(n);
}

int main()
{
    fastIO();
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}