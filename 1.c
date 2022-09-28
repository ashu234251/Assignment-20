// 1. Write a function to swap values of two in variables of calling function. (TSRS)

#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter Values of a: ");
    scanf("%d",&a);
    printf("Enter Values of b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Value of a is: %d",a);
    printf("\nValue of b is: %d",b);
    return 0;
}

void swap(int *a,int *b)
 {
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
 } 