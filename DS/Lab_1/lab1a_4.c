#include <stdio.h>
void main(){

    int n1,n2,n3;
    int ans;

    printf("Enter the three number:");
    scanf("%d %d %d",&n1, &n2, &n3);

    ans=(n1>n2 && n1>n3)?(n1):((n2>n3 && n2>n1)?(n2):n3);

    printf("largest number is:%d",ans);

}