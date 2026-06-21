#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the element: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements are:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
