#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
vector<long long> dp;

long long countWays(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];

    long long cnt = 0;
    for(int i = 1; i<=6; i++){
        cnt = (cnt + countWays(n - i)) % MOD;
    }
    
    dp[n] = cnt;
    return cnt;;
}
int main(){
    int n; cin>>n;
    dp.assign(n+1, -1);
    cout<<countWays(n);
}