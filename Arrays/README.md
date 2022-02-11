# Top Arrays Problems

## Level 1

### [Peak Element](https://practice.geeksforgeeks.org/problems/peak-element/1)

 The idea is based on the technique of Binary Search to check if the middle element is the peak element or not. If the middle element is not the peak element, then check if the element on the right side is greater than the middle element then there is always a peak element on the right side. If the element on the left side is greater than the middle element then there is always a peak element on the left side.

### [Subarray with given sum](https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1)

There is an idea if all the elements of the array are positive. If a subarray has sum greater than the given sum then there is no possibility that adding elements to the current subarray the sum will be x (given sum). Idea is to use a similar approach to a sliding window. Start with an empty subarray, add elements to the subarray until the sum is less than x. If the sum is greater than x, remove elements from the start of the current subarray.

## Level 2

### [Count pairs with given sum]()

The idea is to use the map to store the frequency of elements of an array. Then while traversing the elements, reduce the sum target at each step and check the sum target present in the map, if present add all the frequncy to a result variable.

### [Find duplicates in an array](https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1)

The basic idea is to use a HashMap to solve the problem. But there is a catch, the numbers in the array are from 0 to n-1, and the input array has length n. So, the input array can be used as a HashMap. While traversing the array, if an element a is encountered then increase the value of a%n'th element by n. The frequency can be retrieved by dividing the a%n'th element by n.

### [Common elements in 3 sorted array](https://practice.geeksforgeeks.org/problems/common-elements1132/1)

Simple approach -> use three pointers and move them accordingly and to remove duplicates -> can use set<br />

Efficent approach -> Let's consider the current element traversed in ar1[] be x, in ar2[] be y and in ar3[] be z and let the variables prev1, prev2, prev3 for keeping the track of last encountered element in each array and initialize them with INT_MIN. Hence for every element we visit across each array, we check for the following.<br />

If x, y, and z are same, we can simply print any of them as common element, update prev1, prev2, and prev3 and move ahead in all three arrays.
Else If (x < y), we update prev1 and move ahead in ar1[] as x cannot be a common element.
Else If (y < z), we update prev2 and move ahead in ar2[] as y cannot be a common element.
Else If (x > z and y > z), we update prev3 and we move ahead in ar3[] as z cannot be a common element.

### [Subarrays with equal 1s and 0s](https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1)





