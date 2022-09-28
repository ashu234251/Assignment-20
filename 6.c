// 6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50],*ptr;
    int length,i;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
      str[strlen(str)-1]='\0';

    ptr=str;
    for(i=0;*(ptr+i);i++);

    printf("Length of the string is %d.",i);

    return 0;
     
    
}