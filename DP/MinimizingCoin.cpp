#include<bits/stdc++.h>
using namespace std;

vector<long long>P;
vector<vector<long long>> memo;
vector<long long>ans;
long long Coin(long long m, long long n){
    for(long long j = 1; j<=m; j++){
        for(long long i=1; i<=n; i++){
            if(j>=P[i]){
                ans[j] = min(ans[j], 1+ans[j-P[i]]);
            }
        }
    }
    return ans[m]==10e14 ? -1 : ans[m];
}
int main(){
    long long n, m; cin>>n>>m;
    P.assign(n + 1, 0);
    ans.assign( m + 1, 10e14);
    ans[0] = 0;
    for (long long i = 1; i <= n; i++) cin >> P[i];
    cout<<Coin(m,n);
}