Apartment :
1. sorting both array to get maximum matching
2. tried binary search but failed (TLE)
3. then used two pointer method : if apartment fits then move both i and j and (cnt++) , if appartment too small increment apartment, if apartment too big incremnt applicant


Concert Ticket:

1. First idea was finding upper bound 
2. used multiset to erase used values in nlongn time


Restaurant Customers
1. event sorting
2. push +1 when arriving , push -1 when leaving
3. sort them
4. find max


Movie Fesival
1. Greedy activity selection problem
2. to get maximun value first we need to chose the movies with first ending time ! so we must need to sort the movies based on their ending time


Sum of two values
1. using two pointer method to avoid tle
2. if sum of two values == to x then we are printing it
3. if sum of two values < x then we are increasing i (start point)
4. if sum of two values > x then we are decreasinf j (end point)
5. using pair to store to store original index after sorting !


Maximum subarray sum
1. used kadanes algo
2. main idea is Keep track of the current sum of the subarray ending at the current index. If adding the current element makes the sum worse (less than just starting fresh from this element), restart the sum. Keep track of the maximum sum (mx) seen so far.


Stick Length
1. basic idea was finding the value in the middle and add the absolute diffrence of that with all other values in the array in a variable !
2. edge case could be when n is even , in this case we have to consider to values in the middle n/2 and n/2+1.


Missing Coin Sum 
1.This code sorts the coins and keeps extending the smallest unmakeable sum smallest until it finds a coin larger than smallest, at which point smallest is the answer.





