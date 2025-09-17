#include <bits/stdc++.h>

using namespace std;

int divisors(int a)
{
    if (a == 1)
        return 1;
    int ans = 2;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            if (i != sqrt(a))
                ans += 2;
            else
                ans += 1;
        }
    }
    return ans;
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
        int x;
        cin >> x;
        cout << divisors(x) << endl;
    }
    return 0;
}