## [Josephus Queries](https://cses.fi/problemset/task/2164)

**Inital thought:** 
1. if 2k < n, ans = 2k  
2. if n even and n = k, ans = 1 else ans = n if n is odd
3. after one cycle, next cycle value is 2k+1 if n is even , else 2k-1 if n is odd 
    - Tried to make a formula instead of recursion but failed 
