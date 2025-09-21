#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ll n;
    cin >> n;

    vector<ll> songs(n);
    for (ll i = 0; i < n; i++){
         cin >> songs[i];
    }

    map<ll, ll> mp;
    ll start = 0, ans = 0;

    for (ll end = 0; end < n; end++) {

        if (mp.find(songs[end]) != mp.end() && mp[songs[end]] >= start)
            start = mp[songs[end]] + 1;

        mp[songs[end]] = end;
        ans = max(ans, end - start + 1);
    }

    cout << ans <<endl;
}
