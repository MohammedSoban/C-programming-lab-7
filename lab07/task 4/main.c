#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int arr[5],i,odd[5],even[5],n,sizeeven[5],even1=0,odd1=0;
    for(i=0;i<5;i++)
    {
    printf("enter value [%d]:",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
        even[i]=arr[i];
        odd[i]=arr[i];

    }

    for(i=0;i<=5;i++)
    {
        if(even[i]%2==0)
            printf("the even numbers are: %d\n",even[i]);

     }



    for(i=0;i<5;i++)
    {
        if(odd[i]%2!=0)
            printf("the odd numbers are: %d\n",odd[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even1++;
        }
        else
        {
            odd1++;
        }

    }
     printf("Total even elements: %d\n", even1);
    printf("Total odd elements: %d\n", odd1);

    return 0;
}
