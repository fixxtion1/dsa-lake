// Key Idea: Take larger element to the end by reapeatedly swapping the adjancent elements.

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
	
	for(int times=1; times <= n-1; times++){
		for(int j=0; j <= n-times-1; j++){
			if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
		}
	}
}

int main(){
	int arr[] = {3, 4,3, 2,1, 45,78,34};
	int n = sizeof(arr)/sizeof(int);
	bubble_sort(arr, n);

	for(auto x: arr) cout << x << ",";
	
	return 0;
}
