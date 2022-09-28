// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>
#include<string.h>

void swap(char *,char *);

int main()
{
    char str1[50],str2[50];
    printf("Enter Value of 1st String: ");
    fgets(str1,50,stdin);
    if(str1[strlen(str1)-1]=='\n')
      str1[strlen(str1)-1]='\0';
    
    printf("Enter Value of 2nd String: ");
    fgets(str2,50,stdin);
    if(str2[strlen(str2)-1]=='\n')
      str2[strlen(str2)-1]='\0';

    swap(str1,str2);
    printf("First String is %s",str1);
    printf("\nSecond String is %s",str2);
}

void swap(char *s1,char *s2)
 {
   char temp[50];
   strcpy(temp,s1);
   strcpy(s1,s2);
   strcpy(s2,temp);
 }