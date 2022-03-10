#include <stdio.h>

struct student{
	char name[100];
	int registrationNumber;
	char fatherName[100];
}s[10];

int main(){
	int n;
	printf("How many students to add?\n");
	scanf("%d", &n);
	printf("Enter the information of students:\n");

	for(int i=0; i < n; i++){
		printf("\nEnter the name: ");
		scanf("%s", s[i].name);
		printf("Enter the registration number: ");
		scanf("%d", &s[i].registrationNumber);
		printf("Enter the father name: ");
		scanf("%s", s[i].fatherName);
	}

	printf("Displaying Information\n");

	for(int i=0; i < n; i++){
		printf("\n\nName of the student is: %s", s[i].name);
		printf("\nRegistration number of the student is: %d", s[i].registrationNumber);
		printf("\nFather name of the studnet is :%s", s[i].fatherName);
	}
	return 0;
}

