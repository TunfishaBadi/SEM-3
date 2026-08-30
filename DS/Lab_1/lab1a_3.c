#include <stdio.h>
void main(){
    char c;

    printf("Enter the char:");
    scanf("%s",&c);
    
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("character is vowel");
    }
    else{
        printf("character is not vowel");
    }
}