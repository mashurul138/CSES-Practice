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

    sort(v.begin(),v.end());

    ll ans = 0;

    if(n%2!=0){

        ll mid = n/2;
        for(int i = 0; i<n; i++){
            ans = ans + abs(v[i]-v[mid]);
        }

    }else{
        ll mid1 = n/2;
        ll mid2 = n/2 - 1;

        ll r1=0,r2=0;

        for(int i = 0; i<n; i++){
            r1 = r1 + abs(v[i]-v[mid1]);
        }
        for(int i = 0; i<n; i++){
            r2 = r2 + abs(v[i]-v[mid2]);
        }
        ans = min(r1,r2);


    }

    cout<<ans<<endl;



return 0;
}

