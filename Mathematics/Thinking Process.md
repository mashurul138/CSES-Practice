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

## [Common Divisors](https://cses.fi/problemset/task/1081/)
**Thoughts:**  
1. The largest GCD divides minimum 2 numbers in the array.
2. So assume max value in the array is the gcd, count the frequency of the divisors, if the count if greater than or equal to 2 then, this is the highest GCD value.

## [Sum Of Divisors](https://cses.fi/problemset/task/1082/)
**Thoughts:**  
1. Iterative process exceeds time limit
2. find a range that contributes same amount of time in the answer
3. apply sum of divisor formula. SOD(n) = Sum(d*floor(n/d))
4. use int128 or inverse modular to avoid overflow

## [Prime Multiples](https://cses.fi/problemset/task/2185/)
**Thoughts:**  
1. (A U B U C) = A + B + C - AB - AC - BC + ABC
2. check all subset
3. if the subset is odd length add its count else substract

## [Binomial Coefficients](https://cses.fi/problemset/task/1079/)
**Thoughts:**  
1. pre calculate all possible factorial and inverse factorial upto largest possible (a/b)
