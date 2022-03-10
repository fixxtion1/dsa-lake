# Arrays

### Operations

#### Rotation

Input: 1 2 3 4 5 6

after rotating by 2 elements

Output: 3 4 5 6 1 2

Method 1:

Idea is to rotate the array one by one k times

```
void rotateByOne(int arr[], int n){
	int temp = arr[0];
	
	for(int i=1; i<n; i++) arr[i-1] = arr[i];

	arr[n-1] = temp;
}
```

O(n*k), O(1)

Method 2:



