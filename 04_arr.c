// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n1, n2, c;
    printf("enter the value of n1:");
    scanf("%d", &n1);
    printf("\n enter the value of n2:");
    scanf("%d", &n2);
    n1 %= n2; // n1 = n1%n2 | remainder dinxa :)
    printf("\n the modulous  value of n1:%d", n1);

    return 0;
}