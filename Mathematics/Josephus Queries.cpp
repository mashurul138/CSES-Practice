#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll kThChild(ll n, ll k)
{
    if (n == 1)
        return 1;
    if (2 * k <= n + 1)
        return (n & 1) ? 2 * k % n : 2 * k;
    ll ans = kThChild(n / 2, k - (n + 1) / 2);
    return (n & 1) ? 2 * ans + 1 : 2 * ans - 1;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << kThChild(n, k) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }

    return 0;
}