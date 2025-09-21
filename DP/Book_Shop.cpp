#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> memo;
vector<int>P,W;

void initMemo(int n, int i){
    for(int r = 0; r<=n; r++){
        for(int c = 0; c<=i; c++){
            if(r==0 or c==0) memo[r][c] = 0;
            else memo[r][c]=-1;
        }
    }
}

int knapSack(int c, int i){
    if(c==0 or i==0) return 0;
    if(memo[c][i]!=-1) return memo[c][i];

    int taken, notTaken;
    notTaken = 0+knapSack(c, i-1);
    if(c>=W[i])
        taken = P[i] + knapSack(c-W[i], i-1);
    else
        taken = 0;
    
    if(notTaken>=taken){
        memo[c][i] = notTaken;
        return notTaken;
    }else{
        memo[c][i] = taken;
        return taken;
    }
}

int main(){
    int c, i;  cin>>i>>c;
    P.assign(i+1,0);
    W.assign(i+1,0);
    memo.assign(c+1,vector<int>(i+1,0));
    for(int j = 1; j<=i; j++){
        cin>>W[j];
    }
    for(int j = 1; j<=i; j++){
        cin>>P[j];
    }
    initMemo(c,i);
    int result = knapSack(c, i);
    cout<<result<<endl;
}
