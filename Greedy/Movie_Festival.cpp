#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n;
    cin>>n;

    vector<pair<int,int>>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(), v.end(), [](auto &x, auto &y){
        return x.second < y.second;
    });


    int cnt = 0;
    int le = 0;

    for(int i = 0; i < n; i++){

        if(v[i].first >= le){

            cnt++;
            le = v[i].second;

        }

    }

    cout<<cnt<<endl;




return 0;
}
