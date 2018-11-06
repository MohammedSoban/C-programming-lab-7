#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5],i,j,count=0;
    for(i=0;i<5;i++)
    {
        printf("enter the values [%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)

        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
        }
    }
 printf("the number of duplicate elements are: %d",count);
    return 0;
}
