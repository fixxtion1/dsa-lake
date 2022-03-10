#include<stdio.h>

struct demo {
  char str[50];
  int value;
};

void displayData(struct demo[], int);

int main() {
  struct demo d1[5];
  printf("Enter 5 strings: ");
  for (int i = 0; i < 5; i++)
    scanf("%s", d1[i].str);
  char temp;
  scanf("%c", & temp);
  printf("Enter 5 values: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", & d1[i].value);
  // passsing array of stucture to function
  displayData(d1, 5);
}

void displayData(struct demo d[], int size) {
  printf("Displaying details inside struucture array:->\n");
  for (int i = 0; i < 5; i++) {
    printf("\nString:%d-> %s", i + 1, d[i].str);
    printf(" Value:%d -> %d", i + 1, d[i].value);
  }
}
