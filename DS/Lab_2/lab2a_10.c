#include <stdio.h>
void mian(){

    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    int digit,rev=0;
    while(n!=0){
        digit=n%10;
        rev=rev*10+(digit);
        n=n/10;
    }
    printf("Revers number is %d",rev);
}