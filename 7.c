// 7. Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],*ptr;
    int i,v=0,c=0;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
      str[strlen(str)-1]='\0';
    
    
    ptr=str;
    for(i=0;*(ptr+i);i++)
    {
        if(*(ptr+i)==65 || *(ptr+i)==69 || *(ptr+i)==73 || *(ptr+i)==79 || *(ptr+i)==85 || *(ptr+i)==97 || *(ptr+i)==101 || *(ptr+i)==105 || *(ptr+i)==111 || *(ptr+i)==117)
          v++;
        else if((*(ptr+i)>64 && *(ptr+i)<91) || (*(ptr+i)>96 && *(ptr+i)<123))
          c++;
    }

    printf("Number of Vowels are: %d",v);
    printf("\nNumber of Consonants are: %d",c);

    return 0;

    
}