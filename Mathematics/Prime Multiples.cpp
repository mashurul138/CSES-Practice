#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    int k;
    cin >> n >> k;
    ll a[k];
    for (int i = 0; i < k; i++)
        cin >> a[i];
    ll divisorCount[k + 1] = {};
    for (int mask = 1; mask < (1 << k); mask++) // check all possible subset using bitmask
    {
        ll numOfDivisor = 0, temp = n;
        for (int i = 0; i < k; i++)
        {
            if ((1 << i) & mask) // check if ith prime is in the subset or not
            {
                numOfDivisor++;
                temp /= a[i];
            }
        }
        divisorCount[numOfDivisor] += temp;
    }
    ll ans = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i & 1) // if divisor count is odd add its contribution else substract
            ans += divisorCount[i];
        else
            ans -= divisorCount[i];
    }
    cout << ans << endl;
    return 0;
}