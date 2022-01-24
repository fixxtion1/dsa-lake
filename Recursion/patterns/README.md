# Patterns

### Some terms

Substring: continous part of string<br />
Subsequence: any combination part of string but order matters<br />
Subset: any combo and order dont matter even<br />

But it is common practice to print powerset in case of Subsequnece too.


### [Subsets](https://leetcode.com/problems/subsets/)

The idea is to make a recursive function(parameterised) with parameters as input vector, a index, 1d temp vector(for storing the one subset element at every stage when base case is encountered) and finally a 2d ans vector (at base we have to add the temp to final) and then we may apply take/not take idea to get all possible elements of subset.


