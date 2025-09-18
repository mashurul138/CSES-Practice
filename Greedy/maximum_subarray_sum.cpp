#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n;
    cin>>n;

    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    ll cur = a[0], mx = a[0];

    for (int i = 1; i < n; i++) {

        cur = max((ll)a[i], cur + a[i]);
        mx = max(mx, cur);

    }

    cout<<mx<<endl;





return 0;
}


