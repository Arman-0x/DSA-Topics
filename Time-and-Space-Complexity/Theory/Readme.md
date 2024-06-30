Time Complexity:
  
Time complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input.

Running time --->linear ,----->quadratic,----->Cubic  can be vary according to the input size.

While Executing a program we consider two aspects that is time and space.

Space Complexity: 

Space Complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input . It is directly propotional to the largest memory your program acquires at any instances during runtime.

Example:
In a program we taken a variable for input integer data , one var to store integer result and one var for integer applied in a for loop that is performing some operations .
so it can be seen we have use 3 int var , so that total space taken by input result and loop int is just 12Bytes irrespective if size of variables.

12bytes--->constant , in this case time complexity does not depend on input size.

Ex:
we are creating an array, each int array location contain 4 memory blocks(4 bytes) hence in this case space complexity depend upon int size N.
cin>>N;
int Array[N];

      Best Case, Worst Case, and Average Case
- *Best Case[O]**: The scenario where the algorithm performs the fewest steps.
- *Worst Case[omega]**: The scenario where the algorithm performs the most steps.
- *Average Case[big theta]**: The average number of steps the algorithm performs, considering all possible inputs. 


#code Examples
1)- [Time-and-Space-Complexity-Example](../code/Time-and-Space-Complexity-Example.cpp) - Demonstrates the time complexity change algorithm.

2)- [Time-and-Space-Complexity-Example](../code/Time-and-Space-Complexity-Example2.cpp)
