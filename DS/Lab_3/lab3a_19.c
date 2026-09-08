#include <stdio.h>
void main(){

    int n,i;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i);
        scanf("%d", &arr[i]);
    } 
    int largest=arr[0];
    int smallest=arr[0];
    int lp,sp;

    for(i=0; i<n; i++){
        if(largest<arr[i]){
            largest=arr[i];
            lp=i;
        }
        if(smallest>arr[i]){
            smallest=arr[i];
            sp=i;
        }
    }
    printf("position of largest number is %d\n",lp);

    printf("position of smallest number is %d",sp);
}