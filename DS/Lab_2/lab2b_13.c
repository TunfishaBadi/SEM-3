#include <stdio.h>
void main(){

    int n1,n2; 

    printf("Enter the two number:");
    scanf("%d %d",&n1, &n2);

    int i,j;
    for(i=n1; i<=n2; i++){
        for(j=1; j<=i; j++){
            if(i%j!=0){
                printf("%d\n",i);
            }
        }
    }
}