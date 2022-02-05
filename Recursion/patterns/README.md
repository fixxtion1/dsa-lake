# Patterns

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

### Technique to print count of number of subsequence with sum k

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

### [Permutations](https://leetcode.com/problems/permutations/)

```
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums,vector<int> temp,vector<int> &vis){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(vis[i]==-1){
                vis[i]=1;
                temp.push_back(nums[i]);
                backtrack(nums,temp,vis);
                vis[i]=-1;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> vis(nums.size(),-1);
        backtrack(nums,{},vis);
        return ans;
    }
```


### [Permutations II](https://leetcode.com/problems/permutations-ii/)
```
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums,vector<int> temp,vector<int> &vis){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(vis[i]==1 || (i>0 && nums[i-1]==nums[i] && vis[i-1]==-1)){
                continue;
            }
            else{
                vis[i]=1;
                temp.push_back(nums[i]);
                backtrack(nums,temp,vis);
                vis[i]=-1;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> vis(nums.size(),-1);
        sort(nums.begin(),nums.end());
        backtrack(nums,{},vis);
        return ans; 
    }
```

### [Subsets](https://leetcode.com/problems/subsets/)

```
    void backtrack(vector<vector<int>> &ans,vector<int> nums,int start,vector<int> temp){
        ans.push_back(temp);
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(ans,nums,i+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> ans;
        backtrack(ans,nums,0,{});
        return ans;
    }
```

### [Subsets II](https://leetcode.com/problems/subsets-ii/)

```
    void backtrack(vector<vector<int>> &ans,vector<int> nums,vector<int> temp,int start){
        ans.push_back(temp);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            backtrack(ans,nums,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        backtrack(ans,nums,{},0);
        return ans;
    }
```

### [Combinations](https://leetcode.com/problems/combinations/)

```
    void backtrack(vector<vector<int>> &ans,vector<int> &vis,int start,int &n,int &k,vector<int> &temp){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<=n;i++){
            if(vis[i]==-1){
                temp.push_back(i);
                vis[i]=1;
                backtrack(ans,vis,i+1,n,k,temp);
                vis[i]=-1;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       vector<vector<int>> ans;
        vector<int> vis(n+1,-1);
        vector<int> temp;
        backtrack(ans,vis,1,n,k,temp);
        return ans;
    }
```

### [Combination Sum](https://leetcode.com/problems/combination-sum/)

```
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums,vector<int> &temp,int &sum,int currsum,int start){
        if(currsum==sum){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size();i++){
            if((currsum + nums[i])<=sum){
                temp.push_back(nums[i]);
                backtrack(nums,temp,sum,currsum+nums[i],i);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& num, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> temp;
        backtrack(num,temp,target,0,0);
        return ans;
    }
```

### [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)

```
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums,vector<int> &temp,int &sum,int currsum,int start){
        if(currsum==sum){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            if((currsum + nums[i])<=sum ){
                temp.push_back(nums[i]);
                backtrack(nums,temp,sum,currsum+nums[i],i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> temp;
        sort(nums.begin(),nums.end());
        backtrack(nums,temp,target,0,0);
        return ans;
    }
```

### [Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)

```
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> ans;
    //vector<int> vis(nums.size(),-1);
    //nsf --> number/candidate taken so far
    //ssf --> sum so far
    //fn --> final no of candidates/number to use
    //fs -->final sum
    void backtrack(vector<int> &temp,int nsf,int ssf,int &fn,int &fs,int start){
        if(nsf==fn && ssf==fs){
            ans.push_back(temp);
            return;
        }
        else if(nsf>fn || ssf>fs){
            return;
        }
        for(int i=start;i<nums.size();i++){
            if(ssf+nums[i]<=fs && nsf+1<=fn){
                temp.push_back(nums[i]);
                backtrack(temp,nsf+1,ssf+nums[i],fn,fs,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
           vector<int> temp;
          backtrack(temp,0,0,k,n,0);
        return ans;
    }
```

### [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

```
    vector<string> codes = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void backtrack(string number,string temp){
        
        if(number.size()==0){
            ans.push_back(temp);
            return;
        }
        char c = number[0];
        string rem = number.substr(1);
        string chcode = codes[c-'0'];
        
        for(int i=0;i<chcode.size();i++){
            char chchoice = chcode[i];
            backtrack(rem,temp + chchoice);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return {};
        }
        backtrack(digits,"");
        return ans;
    }
```

### [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)

```
    vector<vector<string>> ans;
    bool ispalindrome(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    void backtrack(string &s,vector<string> &temp,int start){
        if(start==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<s.size();i++){
            if(ispalindrome(s,start,i)){
                temp.push_back(s.substr(start,i-start+1));
                backtrack(s,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<string> temp;
        backtrack(s,temp,0);
        return ans;
    }
```

### [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

```    
    void backtrack(int n,vector<string> &ans,string temp,int open,int close){
        if(temp.size()==(2*n)){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            backtrack(n,ans,temp+"(",open+1,close);
        }
        if(close<open){
            backtrack(n,ans,temp+")",open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(n,ans,"",0,0);
        return ans;
    }
```
