#include<stdio.h>
void main(){

    int n,i;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the array element:");
        scanf("%d", &arr[i]);
    } 
    int avr = 0,sum = 0;
    for(i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    avr=sum/n;
    printf("average of number is=%d",avr);
}