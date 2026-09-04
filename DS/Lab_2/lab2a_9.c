#include <stdio.h>
void main(){

    int base,pow;

    printf("Enter the base and power:");
    scanf("%d %d",&base, &pow);

    int ans=base,i,j,temp;

    for(i=1; i<pow; i++){
        temp=ans;
        ans=0;
        for(j=1; j<=base; j++){
            ans=ans+temp;
        }
    }
    printf("%d",ans);
}