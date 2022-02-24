#include<stdio.h>

int main(){
	int n; 
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array:\n");
	//taking input the whole array
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int count = 0;
	for(int i=0; i<n; i++)	if(arr[i] == 0) ++count;

	for(int i=0; i<count; i++) arr[i] = 0;
	for(int j=count; j<n;j++) arr[j]=1 ;

	printf("After segregation:\n");
	for(int j=0; j<n; j++){
		printf("%d ", arr[j]);
	}
	return 0;
}
