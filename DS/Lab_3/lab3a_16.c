#include <stdio.h>
void main(){

    int n,i;

    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++){
        printf("Enter the %d element:",(i+1));
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}