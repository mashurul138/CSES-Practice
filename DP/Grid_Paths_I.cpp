#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef deque<int> di;
typedef pair<int, int> pii;

#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define pf push_front
#define ppf pop_front
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define sz(x) int(x.size())

#define for0(i, n) for (int i = 0; i < int(n); i++)
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)

#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)

#define ip(a, n) for0(i, n) cin >> a[i]
const int MOD = 1e9 + 7;

int main() {
    Fast_io;
    int n; cin>>n;
    vector<string> s(n);
    for(int i = 0; i<n; i++) cin>>s[i];
    vector<vector<int>> dp(n, vector<int>(n,0));
    if (s[n-1][n-1] == '.') dp[n-1][n-1] = 1;

    for(int i = n-1; i>=0; i--){
        for(int j = n-1; j>=0; j--){
            if(j==n-1 and i==n-1) continue;
            if(s[i][j]=='*') dp[i][j]=0;
            else{
                int a1,a2;
                if(i<n-1) a1=dp[i+1][j];
                else a1 = 0;
                if(j<n-1) a2 = dp[i][j+1];
                else a2 = 0;
                dp[i][j] = (a1+a2)%MOD;
            }
        }
    }
    cout<<dp[0][0];
    return 0;
}