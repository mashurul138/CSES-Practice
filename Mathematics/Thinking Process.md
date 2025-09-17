## [Josephus Queries](https://cses.fi/problemset/task/2164)

**Inital thought:** 
1. if 2k < n, ans = 2k  
2. if n even and n = k, ans = 1 else ans = n if n is odd
3. after one cycle, next cycle value is 2k+1 if n is even , else 2k-1 if n is odd 
    - Tried to make a formula instead of recursion but failed 

## [Exponentiation](https://cses.fi/problemset/task/1095)
**Thoughts:**  
1. Binary Exponentiation

## [Exponentiation II](https://cses.fi/problemset/task/1712)
**Thoughts:**  
1. Binary Exponentiation
2. First calculate power = b^C mod (m-1) then, a^power mod m.


## [Counting Divisors](https://cses.fi/problemset/task/1713/)
**Thoughts:**  
1. count divisors till root(x) multiply by 2, if divisor*divisor = x then count 1.
