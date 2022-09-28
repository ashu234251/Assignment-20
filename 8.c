// 8. Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int a[size],*ptr,i,sum=0;

    ptr=a;
    printf("Enter %d Elements: \n");
    for(i=0;i<size;i++)
     {
        scanf("%d",ptr+i);
     }

     for(i=0;i<size;i++)
     {
        sum=sum+*(ptr+i);
     }

     printf("Sum of all Elements in the Array is %d.",sum);
     return 0;

    

}