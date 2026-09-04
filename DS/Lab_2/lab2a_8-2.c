#include <stdio.h>

int fact(int n);

int main(){

    int n;

    printf("Enter the nuber:");
    scanf("%d",&n);

    int ans=fact(n);
    printf("factorial of number is %d",ans);

    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*(fact(n-1));
}