#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 7;
const ll INV2 = (MOD + 1) / 2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll result = 0;
    ll i = 1;
    while (i <= n)
    {

        ll q = n / i;
        ll last = n / q;

        ll i_mod = i % MOD;
        ll last_mod = last % MOD;

        ll len = (last_mod - i_mod + 1 + MOD) % MOD;

        ll sumRange = len * ((i_mod + last_mod) % MOD) % MOD * INV2 % MOD;

        result = (result + (q % MOD) * sumRange % MOD) % MOD;

        i = last + 1;
    }
    cout << result << endl;
    return 0;
}