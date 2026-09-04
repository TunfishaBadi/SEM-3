#include <stdio.h>
void mian(){

    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    int fact=1,i;
    for(i=1; i<n; i++){
        fact=fact*i;
    }
    printf("factorial of number is %d",i);
}