#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n,x;
    cin>>n>>x;

    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    vector<pair<int,int>>a(n);
    for(int i = 0; i<n; i++){
        a[i].first = v[i];
        a[i].second = i;
    }

    sort(a.begin(),a.end());

    int i = 0;
    int j = n-1;

    int flag = 0;

    while(i<=j){

        if(a[i].first+a[j].first==x  and a[i].second !=a[j].second){
            flag = 1;
            cout<<a[i].second+1<<" "<<a[j].second+1<<endl;
            break;
        }

        if(a[i].first+a[j].first<x){
            i++;
        }else{
            j--;
        }

    }

    if(!flag) cout<<"IMPOSSIBLE"<<endl;



return 0;
}

