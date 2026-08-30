#include <stdio.h>
void main(){
    
    int sec,h,m,s;

    printf("Enter the second:");
    scanf("%d",&sec);

    h=sec/3600;
    m=(sec%3600)/60;
    s=sec%60;

    printf("%d:%d:%d:",h,m,s);

    
}