#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> e;

    for (int i = 0; i < n; i++) {

        int a, b;
        cin >> a >> b;

        e.push_back({a, +1});
        e.push_back({b, -1});

    }

    sort(e.begin(), e.end());

    int curr = 0, mx = 0;

    for (int i = 0; i<e.size(); i++) {

        curr += e[i].second;
        mx = max(mx, curr);

    }

    cout << mx <<endl;


    return 0;
}
