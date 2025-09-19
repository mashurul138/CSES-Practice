#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int x[n];
    int maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        maxVal = max(maxVal, x[i]);
    }
    vector<int> freq(maxVal + 1);
    for (int i = 0; i < n; i++)
    {
        freq[x[i]]++;
    }

    for (int gcd = maxVal; gcd >= 1; gcd--)
    {
        int cnt = 0;
        for (int multiple = gcd; multiple <= maxVal; multiple += gcd)
        {
            cnt += freq[multiple];
            if (cnt >= 2)
            {
                cout << gcd << endl;
                return 0;
            }
        }
    }
    return 0;
}