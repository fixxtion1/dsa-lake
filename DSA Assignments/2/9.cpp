#include<stdio.h>
#include<math.h>

int main() {
    int n, m, p;
    printf("Enter the number:\n");
    scanf("%d", & n);
    printf("Enter the power:\n");
    scanf("%d", & m);
    p = pow(n, m);
    printf("%d power of %d is %d", m, n, p);
    return 0;
}
