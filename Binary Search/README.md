# Binary Search 

The idea is to divide the search space into two parts after every comparison. Binary Search should be considered every time you need to search for an index or element in a collection. If the collection is unordered, we can always sort it first before applying Binary Search.

We can use any template, but it is easier sometime with specific template.<br />

###  Template 1

```
int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size() - 1;
  while(left <= right){
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid - 1; }
  }

  // End Condition: left > right
  return -1;
}
```
In this template, there is no other element left to be checked. Mostly used when there is a specific element we are searching for.

### Template 2

```
int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size();
  while(left < right){
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid; }
  }

  // Post-processing:
  // End Condition: left == right
  if(left != nums.size() && nums[left] == target) return left;
  return -1;
}
```
In this template, there is 1 candidate for post-processing. Mostly used when we need to access the element's immediate right neighbour.


### Template 3

```
int binarySearch(vector<int>& nums, int target){
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left + 1 < right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid;
        } else {
            right = mid;
        }
    }

    // Post-processing:
    // End Condition: left + 1 == right
    if(nums[left] == target) return left;
    if(nums[right] == target) return right;
    return -1;
}
```
In this template, there are 2 candidates for post-processing. Use when we need to access both the neighbours of element.

## Binary Search on any Monotnic Function

Binary search is applied on monotonic predicate function.
Only two such possible function are:
F F F F T T T T
T T T T F F F F

Lets take example: <br />

[Eko Problem](https://www.spoj.com/problems/EKO/)
In this we are supposed to find maximum height to cut off at least M metres of wood.<br />

We can devise a predicate monotic function here "isWoodEnough?" and we have to find the last true in search space of [0, H].( We are applying here bianary search on the cutting height, H)



