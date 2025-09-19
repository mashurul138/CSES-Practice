#include<bits/stdc++.h>
using namespace std;
//#define int long long


int main(){
    int n; cin>>n;
    vector<int> dp(n+1, 1e9);
    dp[0]=0;
    for(int i = 1; i<=n; i++){
        string s = to_string(i);
        for(char c : s){
            int t = c -'0';
            if(t!=0){
                dp[i] = min(dp[i], dp[i-t]+1);
            }
        }
    }
    cout<<dp[n]<<endl;

}

/*
356
350
345
340

*/