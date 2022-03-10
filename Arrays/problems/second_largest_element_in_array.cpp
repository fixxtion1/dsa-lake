// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // Idea is to traverse array and find largest & second largest at every 
 // element point of array
class Solution
{
   public:
    int print2largest(int arr[], int n)
    {
    	//code here.
    	int res = -1, largest = arr[0];
    	
    	for(int i=1; i<n; i++){
    	    if(arr[i] > largest){
    	        res = largest;
    	        largest = arr[i];
    	    }
	    // as array may have duplicates
    	    else if(arr[i] != largest){
    	        if(res==-1 or arr[i] > res){
    	            res = arr[i];
    	        }
    	    }
    	}
    	return res;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
