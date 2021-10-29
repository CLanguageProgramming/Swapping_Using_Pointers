#include <stdio.h>
int swap();

int main()
{
    int num1=0;
    int num2=0;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    int* p;
    int* p1;
    p=&num1;
    p1=&num2;
    int fin = swap(p, p1);
}

int swap(int* n1, int* n2)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
    printf("Number1 = %d\nNumber2 = %d", *n1, *n2);
    return 0;
}
