#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
vector<long long>P;
vector<vector<long long>> memo;
vector<long long>ans;
long long Coin(long long m, long long n){
    for(long long j = 1; j<=m; j++){
        for(long long i=1; i<=n; i++){
            if(j>=P[i]){
                ans[j] = (ans[j] + ans[j-P[i]])%MOD;
            }
        }
    }
    return ans[m];
}
int main(){
    long long n, m; cin>>n>>m;
    P.assign(n + 1, 0);
    ans.assign( m + 1, 0);
    ans[0] = 1;
    for (long long i = 1; i <= n; i++) cin >> P[i];
    cout<<Coin(m,n);
}