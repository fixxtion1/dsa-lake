#include<stdio.h>

struct Company {
  char Cname[50];
  char address[100];
};

void displayData(struct Company);

int main() {
  struct Company demo;
  printf("Enter the name of Company: ");
  fgets(demo.Cname, 50, stdin);
  printf("Enter the address of Company: ");
  fgets(demo.address, 50, stdin);
  char temp;
  scanf("%c", & temp);
  // passsing array of stucture to function
  displayData(demo);
}

void displayData(struct Company demo) {
  printf("Displaying the details of structure Company:->");
  printf("\nCompany name: %s", demo.Cname);
  printf("\nAddress of the company: %s", demo.address);
}
