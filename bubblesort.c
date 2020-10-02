#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

int main()
{
    int arr[MAX], temp, n, xchanges;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //bubble sort
    for(int i=0; i<n-1; i++)
    {
        xchanges = 0;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                xchanges++;
            }
        }
        if(xchanges == 0)
           break;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
