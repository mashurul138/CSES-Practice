#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll X, ll N, ll* P) {
    set<pair<int, int>> ranges;
    ranges.insert({0, X});

    multiset<ll> lengths;
    lengths.insert(X);

    for (int i = 0; i < N; i++) {
        ll pos = P[i];

        auto it = ranges.upper_bound({pos, 0});
        it--;

        ll start = it->first;
        ll end = it->second;

        ranges.erase(it);

        auto it2 = lengths.find(end - start);
        lengths.erase(it2);

        ranges.insert({start, pos});
        ranges.insert({pos, end});
        lengths.insert(pos - start);
        lengths.insert(end - pos);

        cout << *lengths.rbegin() <<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll X, N;
    cin >> X >> N;

    ll* P = new ll[N];
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    solve(X, N, P);

    delete[] P;
    return 0;
}
