#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[6],i;
   for(i=0;i<6;i++)
   {
       scanf("%d",&array[i]);

   }
   for(i=5;i>=0;i--)
   {
       printf("%d",array[i]);
   }

    return 0;
}
