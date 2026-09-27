#include <stdio.h>
void main(){

    int m,n,i,j;

    printf("\nEnter the value of n and m:");
    scanf("%d %d",&n, &m);

    int a[m][n];
    int b[m][n];
    
    printf("\n<--- Enter the first matrix element --->\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter the matrix element:");
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n<--- Enter the secound matrix element --->\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter the matrix element:");
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n<--- First matrix --->\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("<--- secound matrix --->\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int c[m][n];
    printf("<--- Addition of matrix --->\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          c[i][j]=a[i][j]+b[i][j];
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}