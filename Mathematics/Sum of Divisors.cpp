#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 7;
const ll INV2 = (MOD + 1) / 2;

ll sumOfDivisors(ll n)
{
    ll ans = 0, divisor = 1;
    while (divisor <= n)
    {
        ll quotient = n / divisor;
        ll LDivisor = n / quotient;
        ll cnt = LDivisor - divisor + 1;
        __int128_t sum = (__int128_t)cnt * (divisor + LDivisor) / 2;
        ans = (ans + (sum * quotient % MOD)) % MOD;
        divisor = LDivisor + 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    cout << sumOfDivisors(n) << endl;
    return 0;
}