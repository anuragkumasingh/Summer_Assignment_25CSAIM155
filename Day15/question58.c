#include<stdio.h>
int main()
{
    int n, i, first;
    printf("enter number of element");
    scanf("%d", &n);
    int arr[n];
    printf("enter array element");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    printf("array after left rotation");
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}