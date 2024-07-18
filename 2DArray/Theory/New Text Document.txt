



#2D ARRAY



It has 2 parts
a. Rows - Horizontal Arrays in the 2D matrix. For instance, in the above
example, we have 3 rows:
i.

ii.

iii.
b. Columns - Vertical Arrays in the 2D matrix. For instance, in the above
example, we have 5 columns:

i.

ii.

iii.

iv.

v.

3. Note: Indexing of both rows and columns starts with 0.

Declaration of 2D matrices

1. 2D Arrays are declared similar to 1D arrays but with an additional
dimension.
Syntax: int arr[rows][columns]
For example,

Code:

Searching in a matrix

Problem: We have to find if value x is present in the 2D array.
1. While traversing in the 2D matrix, just we have to put one if statement which
checks if(a[i][j] == x) , then x is present otherwise not.

Code:

Spiral Order Matrix Traversal

Problem: We have to print the given 2D matrix in the spiral order. Spiral
Order means that firstly, first row is printed, then last column is printed,
then last row is printed and then first column is printed, then we will come

inwards in the similar way.

For example: for the given matrix,

Spiral order is given by:
1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55
25 29 30 29.

Algorithm: (We are given 2D matrix of n X m ).
1. We will need 4 variables:
a. row_start - initialized with 0.
b. row_end - initialized with n-1.
c. column_start - initialized with 0.

d. column_end - initialized with m-1.
2. First of all, we will traverse in the row row_start from column_start
to column_end and we will increase the row_start with 1 as we have
traversed the starting row.
3. Then we will traverse in the column column_end from row_start to
row_end and decrease the column_end by 1.
4. Then we will traverse in the row row_end from column_end to
column_start and decrease the row_end by 1.
5. Then we will traverse in the column column_start from row_end to
row_start and increase the column_start by 1.
6. We will do the above steps from 2 to 5 until row_start <= row_end
and column_start <= column_end.

Code: Input the array first then perform the following code