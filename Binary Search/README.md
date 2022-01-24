# Patterns 

### [Find Smallest Letter Greater Than Target] (https://leetcode.com/problems/binary-search/)

The idea is to first compare the target >= last char in array if so return first elemnt(wrap around), after that same binary search algo.


### [Peak Index in a Mountain Array] (https://leetcode.com/problems/peak-index-in-a-mountain-array/)

The idea is to compare the current middle element with next middle element.


### [Find the Duplicate Number] (https://leetcode.com/problems/find-the-duplicate-number/)

The idea is that it is known that there is a duplicate, so we can use pigeon hole concept here. We do binary search on the search space of [1:n], then count the number of element<=middle. If the duplicate is on the left side, then count should be more than mid, else it is on right side. 


### [Find Minimum in Rotated Sorted Array] (https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)

The idea is to compare the middle element with ends of the array (start or end).



### [Search in Rotated Sorted Array] (https://leetcode.com/problems/search-in-rotated-sorted-array/)

The idea is that it is known that number of times array is rotated = index of minimum element, se first find the number of rotation and then apply binary search by finding the realMid value = (mid+rot)%n.


### [Search a 2D sorted Matrix] (https://leetcode.com/problems/search-a-2d-matrix/)

The idea is to start searching from top right corner, if target is smaller move left the matrix and else go down in the matrix till index donot become invalid.

