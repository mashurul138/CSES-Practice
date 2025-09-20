#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n;
    cin>>n;

    vector<ll>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    vector<ll>idx(n+1);

    for(int i = 0; i<n; i++){
        idx[v[i]] = i;
    }

    int ans = 1;
    for(int num = 1; num<n; num++){

        if(idx[num]> idx[num+1]) ans++;

    }

    cout<<ans<<endl;



return 0;
}

