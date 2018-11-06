#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5],i,ele;
    for(i=0;i<5;i++)
    {
        printf("enter the elements [%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("enter the element to be deleted");
    scanf("%d",&ele);
     if(ele>5+1)
        printf("deletion not possible");
     else
     {

     }
}
