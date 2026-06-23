#include<stdio.h>
int main(){
    int n, i, last;
    printf("enter number of element");
    scanf("%d", &n);
    int arr[n];
    printf("enter array element");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    last = arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    printf("array after right rotation");
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
