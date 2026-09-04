#include <stdio.h>
void main(){

    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            printf("%d is prime number",n);
        }
        else{
            printf("%d is not prime number",n);
        }
    }
}