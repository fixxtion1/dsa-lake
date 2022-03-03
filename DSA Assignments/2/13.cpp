#include<stdio.h>
struct Student
{
    char name[50];
    char address[100];
    unsigned int roll;
    unsigned int age;
    float marks;
    
};
int main()
{
   struct Student stu, *sptr;
   sptr = &stu;

   printf("Enter the name of student: ");
   fgets(sptr->name,50,stdin);

  printf("Enter the roll no: ");
  scanf("%u",&sptr->roll);

  printf("Enter the age: ");
  scanf("%u",&sptr->age);
 
 printf("Enter the marks of the student: ");
  scanf("%f",&sptr->marks);

  char temp;
  scanf("%c",&temp);
   printf("Enter the address of the student: ");
   fgets(sptr->address,100,stdin);

// printing the details of the student
 printf("\nName of student:-> %s",sptr->name);

  printf("Roll no:-> %u",sptr->roll);

  printf("\nAge:-> %u",sptr->age);
 
  printf("\nMarks of the student:-> %0.2f",sptr->marks);

   printf("\nAddress of the student: %s",sptr->address);

}

