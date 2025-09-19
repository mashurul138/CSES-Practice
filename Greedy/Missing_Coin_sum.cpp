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

    sort(a.begin(),a.end());


    ll small = 1;
    for(int i = 0; i<n;i++){

        if(a[i]>small){
            break;
        }

        small = small + a[i];

    }

    cout<<small<<endl;




return 0;
}


