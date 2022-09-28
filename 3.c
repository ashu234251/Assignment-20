// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>

void sort(int *,int);

int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);

    int a[size];
    sort(a,size);
    return 0;
}

void sort(int *ptr,int size)
{
    int i,j,min;
    printf("Enter %d values: \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }

    
    for(i=0;i<size-1;i++)
     {
        min=*(ptr+i);
        for(j=i+1;j<size;j++)
         {
            if(*(ptr+j)<min)
             {
                min=*(ptr+j);
                *(ptr+j)=*(ptr+i);
                *(ptr+i)=min;
             }
         }
     }
    printf("Sorted Values are: ");
    for(i=0;i<size;i++)
    {
        printf("%d  ",*(ptr+i));
    }


}