// 10. Write a program to print a string in reverse using a pointer

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],*ptr;
    int i,l;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
      str[strlen(str)-1]='\0';

    ptr=str;
    l=strlen(str);
    printf("String in Reverse Order is: ");
    for(i=0;*(ptr+i);i++)
    {
        printf("%c",*(ptr+l-i-1));
    }

    return 0;
}