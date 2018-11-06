#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5],i,ele;
    for(i=0;i<5;i++)
    {
        printf("enter the values [%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&ele);
i=0;
   while(i<5 && ele!=array[i])
   {
       i++;
   }
 if(i<5)
    printf("the number found at location=%d",i+1);
 else
    printf("the number not found");



    return 0;
}
