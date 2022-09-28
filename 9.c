// 9. Write a program to print the elements of an array in reverse order.

#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int a[size],*ptr,i;

    ptr=a;
    for(i=0;i<size;i++)
     {
        scanf("%d",ptr+i);
     }

     printf("Elements of Array in Reverse Order are: ");
     for(i=0;i<size;i++)
     {
        printf("%d  ",*(ptr+size-i-1));
     }
     return 0;
}