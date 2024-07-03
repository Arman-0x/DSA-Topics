An array is a fundamental data structure in programming that stores a collection of elements, all of which are of the same type, in a contiguous block of memory. Each element can be accessed directly by its index, which is an integer representing its position within the array. 
#Arrays are used in a variety of applications, such as:

Storing multiple values: Arrays allow you to store and manage a collection of data.
Sorting and Searching Algorithms: Many algorithms for sorting (like bubble sort, quick sort) and searching (like binary search) operate on arrays.
Matrix Representation: Arrays can be used to represent matrices and perform operations on them.
Dynamic Programming: Arrays are frequently used to store intermediate results in dynamic programming.
Limitations
While arrays are simple and efficient, they do have some limitations:

Fixed Size: The size of an array must be defined at compile time and cannot be changed.
Contiguous Memory: Arrays require a block of contiguous memory, which may not always be available, especially for large arrays.

## Code Examples

Here are some example codes demonstrating the use of arrays:

- [Array Example 1](../code/array_example1.cpp)
- [Array Example 2](../code/array_example2.cpp)
- [Array Example 3](../code/array_example3.cpp)

##Day 4

#Problem 1:
Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).

Approach:
1. Keep a variable mx which stores the maximum till i

th element.

2. Iterate over the array and update,

mx = max(mx, a[i])

Iterations:

Code:

Time Complexity: O(n).

#Subarray:
Subarray is a continuous part of the array.
Note: Number of subarrays of an array with n elements = n

C2 + n = n*(n+1) / 2.

Subsequence
A subsequence is a sequence that can be derived from an array by selecting zero
or more elements, without changing the order of the remaining elements.
Note: Number of subsequences of an array with n elements = 2n
.

Subsequences of the above array are: {}, {1}, {2}, {2}, {1,2}, {1,2}, {2,2}, {1,2,2}.

REMEMBER: Every sub array is a subsequence but every sub sequence is not a subarray

#Question 2:
Given an array a[] of size n. Output sum of each subarray of the given array.

Idea: Iterate over all subarrays and output the sum after each iteration.

Approach
1. Write a nested loop, where outer loop runs from i=0 to i=n-1 and inner loop
runs from j=i to j=n-1.
2. Keep a curr variable which stores the sum from i to j.
3. Output curr after each iteration of inner loop. After inner loop ends, update
curr = 0.

Dry Run

This question tells us how to iterate over all the subarrays. This idea is very useful
in many questions which deals with operations on subarrays.


#question:3
#Arrays Challenge-Longest Arithmetic Subarray

(Google kickstart)

Problem
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Ai
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.
Constraints
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ Ai ≤ 109
.
Test Set 1
2 ≤ N ≤ 2000.
Test Set 2
2 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 2 ≤ N ≤ 2000.

Solution
Constraints Analysis

1 sec = 108 operations
20 sec = 2x109 operations
Intuition: We have to loop over the array and find the answer.
Steps
1. While iterating in the array we need to maintain the following variables,
a. Previous common difference (pd) - To compare it with current
common difference (a[i] - a[i-1]).
b. Current arithmetic subarray length (curr) - It denotes the arithmetic
subarray length including a[i].
c. Maximum arithmetic subarray length (ans) - It denotes the max.
Arithmetic subarray length till a[i].
2. While iterating, there will be two cases,
a. pd = a[i] - a[i-1]
i. Increase curr by 1
ii. ans = max(ans, curr)

3. After loop ends, output the answer. (stored in ans variable).


## Code Examples

Here are some example codes demonstrating the use of arrays:

- [Array Challenge 1](../code/ArrayChallenge1.cpp)
- [Array Challenge 2](../code/ArrayChallenge2.cpp)
- [Array Challenge 3](../code/ArrayChallenge3.cpp)











