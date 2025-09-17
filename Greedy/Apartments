#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

    ll n,m,k;
    cin>>n>>m>>k;

    vector<int>v(n);
    for(int i = 0; i<n; i++) cin>>v[i];

    vector<int>a(m);
    for(int i = 0; i<m; i++) cin>>a[i];


    sort(v.begin(), v.end());
    sort(a.begin(), a.end());


    int i=0,j=0,cnt=0;

    while(i<n && j<m){

        if(abs(v[i]-a[j])<=k){
            cnt++;
            i++; j++;
        }
        else if(a[j] < v[i]-k){
            j++;
        }
        else{
            i++;
        }

    }

    cout<<cnt<<endl;



    return 0;
}
