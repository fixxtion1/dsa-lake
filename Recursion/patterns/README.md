# Patterns

### Some terms

Substring: continous part of string<br />
Subsequence: any combination part of string but order matters<br />
Subset: any combo and order dont matter even<br />

But it is common practice to print powerset in case of Subsequnece too.


### Technique to print only one answer

Make the function itself boolean. If base condititon is true, return true else false. Put the recursive call in if condition.

```
bool f(){
    base case
    return true //if satisfied
    return false //else

    if(f()) return true;
    
    return false;
}
```

### Technique to print count of number of subsequenc with sum k
Make the function return int. If encoutner the base coundition return 1, else return 0. Call the left recursive call and right recursive call and finally return the sum of both(left+right).

```
int f(){
    base case
    return 1 // if satisfied
    return 0 // else

    l = f()
    r = f()

    return l+r
}
```

### [Subsets](https://leetcode.com/problems/subsets/)

The idea is to make a recursive function(parameterised) with parameters as input vector, a index, 1d temp vector(for storing the one subset element at every stage when base case is encountered) and finally a 2d ans vector (at base we have to add the temp to final) and then we may apply take/not take idea to get all possible elements of subset.

```
void backtrack(vector<int> &nums, int i,vector<int> &temp, vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(temp);
            return;         
        }
        
        temp.push_back(nums[i]); //take
        backtrack(nums, i+1, temp, ans);
        temp.pop_back();    //not take
        backtrack(nums, i+1,temp, ans);
          
    }
```

### [Combination Sum](https://leetcode.com/problems/combination-sum/)


