# Patterns 

### [Find Smallest Letter Greater Than Target](https://leetcode.com/problems/binary-search/)

The idea is to first compare the target >= last char in array if so return first elemnt(wrap around), after that same binary search algo.


### [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

The idea is to compare the current middle element with next middle element.

```
int peakIndexInMountainArray(vector<int>& a) {
        int s = 0, e = a.size()-1;
        
        while(s<e){
            int m = s + (e-s)/2;
            if(a[m]<a[m+1]) s = m+1;
            else e = m;
        }
        return s;
    }
```


### [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)

The idea is that it is known that there is a duplicate, so we can use pigeon hole concept here. We do binary search on the search space of [1:n], then count the number of element<=middle. If the duplicate is on the left side, then count should be more than mid, else it is on right side. 

```
int findDuplicate(vector<int>& nums) {
        int s= 1, e = nums.size()-1;
        
        while(s<e){
            int m = s + (e-s)/2;
            int c = 0;
            for(int i:nums) if(i<=m) c++;
            
            if(c>m) e = m ;
            else s = m+1;
        }
       return s; 
    }
```
### [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

The idea is to compare the middle element with ends of the array (start or end).

```
int findMin(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        
        while(s<e){
            if(nums[s]<nums[e]) return nums[s];
            int m  = s + (e-s)/2;
            
            if(nums[m]>=nums[s]) s = m+1;
            else e = m;
        }
        return nums[s];
    }
```




### [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

The idea is that it is known that number of times array is rotated = index of minimum element, se first find the number of rotation and then apply binary search by finding the realMid value = (mid+rot)%n.

```
int search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1, m;
        
        while(s<e){
            m = s + (e-s)/2;
            
            if(nums[m]>=nums[e]) s = m+1;
            else e = m;
        }
        int rot  = s;
        s = 0, e = nums.size()-1;
        int n=  nums.size();
        
        while(s<=e){
            m= s +(e-s)/2;
            int real = (m+rot)%n;
            if(nums[real]==target) return real;
            else if(nums[real]<target) s = m+1;
            else e = m-1;  
        }
        
        return -1;  
    }
```


### [Search a 2D sorted Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

The idea is to start searching from top right corner, if target is smaller move left the matrix and else go down in the matrix till index donot become invalid.

```
bool searchMatrix(vector<vector<int>>& a, int target) {
        int row = a.size();
        int col = a[0].size();
      
        
        int r=0, c=col-1;
        while(r<row and c>=0){
            if(a[r][c]==target) return true;
            else if(a[r][c]>target) c--;
            else r++;
        }
        return false;
    }
```
