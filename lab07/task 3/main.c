#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5],i,odd[5],even[5];
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
    for(i=0;i<5;i++)
    {
        if(even[i]%2==0)
            printf("the even numbers are: %d\n",even[i]);

    }for(i=0;i<5;i++)
    {
        if(odd[i]%2!=0)
            printf("the odd numbers are: %d\n",odd[i]);
    }
    return 0;
}
