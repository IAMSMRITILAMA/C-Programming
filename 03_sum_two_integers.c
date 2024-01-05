#include <stdio.h>
int main()
{
    // int a = 34, b = 12;

    int a, b;
    int sum, sub, multi, div;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;

    printf("The sum of a + b: %d\n", sum);
    printf("The sum of a - b: %d\n", sub);
    printf("The sum of a * b: %d\n", multi);
    printf("The sum of a / b: %d\n", div);

    return 0;
}
