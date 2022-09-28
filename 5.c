// 5. Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2;
    printf("Enter Two Numbers: \n");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    if(*ptr1>*ptr2)
     printf("%d is the Maximum Number.",*ptr1);
    else
     printf("%d is the Maximum Number.",*ptr2);

    return 0;
}