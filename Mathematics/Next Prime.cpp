#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
const int MOD = 1e9 + 7;
ull bases[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
ull primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

ull powMod(ull a, ull b, ull m)
{
    ull res = 1;
    a = a % m;
    while (b)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

bool isPrime(ull n)
{
    if (n < 2)
        return false;
    for (auto p : primes)
    {
        if (n == p)
            return true;
        if (n % p == 0)
            return false;
    }
    ull d = n - 1, s = 0;
    while (!(d & 1))
    {
        d >>= 1;
        ++s;
    }
    for (auto a : bases)
    {
        if (a % n == 0)
            continue;
        ull x = powMod(a % n, d, n);
        if (x == 1 || x == n - 1)
            continue;
        bool composite = true;
        for (ull i = 1; i < s; i++)
        {
            x = x * x % n;
            if (x == n - 1)
            {
                composite = false;
                break;
            }
        }
        if (composite)
            return false;
    }
    return true;
}

ull nextPrime(ull n)
{
    if (n < 2)
        return 2;
    if (n == 2)
        return 3;
    ull cand = n + 1;
    if (!(cand & 1))
        ++cand;
    while (true)
    {
        if (isPrime(cand))
            return cand;
        cand += 2;
    }
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
        ull n;
        cin >> n;
        cout << nextPrime(n) << endl;
    }

    return 0;
}