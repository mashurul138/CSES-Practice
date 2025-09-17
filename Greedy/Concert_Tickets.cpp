#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,m;
    cin>>n>>m;

    multiset<ll> t;
    for(int i=0;i<n;i++){

        ll x;
        cin>>x;
        t.insert(x);

    }

    for(int i=0;i<m;i++){

        ll x;
        cin>>x;

        auto it = t.upper_bound(x);

        if(it == t.begin()) cout << -1 << endl;
        else{

            it--;
            cout << *it << endl;
            t.erase(it);

        }

    }

    return 0;
}
