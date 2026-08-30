#include <stdio.h>
void main(){

    int day,y,w,d;

    printf("Enter the day:");
    scanf("%d",&day);

    y=day/365;
    w=(day%365)/7;
    d=(day%7)-1;

    printf("year:%d week:%d day:%d",y,w,d);
}