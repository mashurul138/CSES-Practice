# Dice Combination
Only possible way is 6. If n is my target then we can find the number of ways recursively by n-i where i is 1 to 6. If n=0 then we return 1 and this is the base case; Since we need to solve it within 1sec so we store the result in dp table and for n we calculate summation of dp[n-i]

# Coin Minimizing
We got unlimited supple of coin P[i]. We need to combine each coin to get the target. We get to the target by seeing the previous best result. 

# Coin Minimizing 1
Same as before but instead of calculating the minimum, we are adding the all possible ways