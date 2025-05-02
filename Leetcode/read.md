#next permutation :to generate the next permutation of given array of integers.

	[1 2 3] its next permutation is [1 3 2]
1>intuition
#First generate all permutation;
#then linear search;
#then return the next permutation of given array;

But it will take roughly o(n!*n) time which is too much.

2> optimized
#example 1 2 3

#we will try to find longer prefix match , like for next permutation ,next element would be smaller .
#a[i]<a[i+1] once we find the index that is in our example it is index 1 then we will search ahead of index +1 for smallest element possible.
#1 2  ahead of 2 is 3 only the smallest, (swap 2,3).
# And then we and sort rest element index+1.
#And that it .
