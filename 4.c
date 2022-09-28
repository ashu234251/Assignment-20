// 4. Write a program in C to demonstrate how to handle the pointers in the program.

#include<stdio.h>

int main()
{
    int a,*p,**q,***r,****s;

    p=&a;
    q=&p;
    r=&q;
    s=&r;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("NUmber is: %d %d %d %d %d",a,*p,**q,***r,****s);
    printf("\nAddress of first level pointer is: %d %d %d %d",p,*q,**r,***s);
    printf("\nAddress of second level pointer is: %d %d %d",q,*r,**s);
    printf("\nAddress of third level pointer is: %d %d",r,*s);
    printf("\nAddress of fourth level pointer is: %d",s);

    return 0;

}