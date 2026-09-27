#include <stdio.h>
void main(){

    int i,j;

    int a[3][2];
    int b[2][3];
    
    printf("\n<--- Enter the first matrix element --->\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Enter the matrix element:");
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n<--- Enter the secound matrix element --->\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Enter the matrix element:");
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n<--- First matrix --->\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("<--- secound matrix --->\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
          printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int c[3][3],k;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = 0;
        for(k=0; k<2; k++){
            c[i][j]=c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    printf("<--- Multiplication of matrix --->\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
}