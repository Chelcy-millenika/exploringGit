#include<stdio.h>
#include<stdlib.h>
#define MAX 100
main()
{
    int arr[MAX],i,j,temp,n,xchanges;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(i=0;i<n-1;i++)
    {
        xchanges=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
                xchanges++;

            }

        }
          if(xchanges==0)
                break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
