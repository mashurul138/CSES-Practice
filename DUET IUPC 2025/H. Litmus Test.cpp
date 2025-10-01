#include <bits/stdc++.h>
#include <numeric>

using namespace std;

// Fast I/O
#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// Type Aliases
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

// Macros
#define MOD 1000000007
#define sp << " " <<
#define nl endl
#define outnl(a) cout << (a) << endl
#define out(a) cout << (a) << " "
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define afl(i, a, b) for (int i = (a); i < (b); ++i)
#define dfl(i, a, b) for (int i = (a); i >= (b); --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
#define pb push_back
#define fora(a) for (auto u : a)
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) (a) / __gcd((a), (b)) * (b)
#define readall(v, n, type)     \
    vector<type> v(n);          \
    for (int i = 0; i < n; ++i) \
        cin >> v[i];

template <typename T>
T readInt()
{
    T x;
    cin >> x;
    return x;
}
// Generic functions
template <typename T>
void display(const T &container) // print all value
{
    for (const auto &element : container)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

template <typename T>
T modPow(T base, T exp, T mod) // calculate a^b % c
{
    T res = 1;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

template <typename T>
bool isPrime(T n) // check a number is prime or not
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (T i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int cnta = 0, cntb = 0, cnts = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            ++cnta;
        else if (s[i] == 'B')
            ++cntb;
        else if (s[i] == 'S')
            ++cnts;
    }
    if (cnta == 0 && cntb == 0)
        outnl(2);
    else if (cnta == 0)
        outnl(cntb);
    else if (cntb == 0)
        outnl(cnta);
    else
        outnl(1);
}

int main()
{
    fastIO();
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}