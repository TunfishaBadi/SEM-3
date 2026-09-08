#include <stdio.h>
void main()
{

    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    int i,j,d;

    for (i = 0; i < n; i++)
    {
        printf("Enter the array element:");
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < n; j++){
        d=arr[j];
        for (i = 0; i < n; i++)
        {
            if (d==arr[i] && i != j)
            {
                count++;
            }
        }
    }
    if (count > 1)
    {
        printf("array contain has duplicate number");
    }
    else
    {
        printf("array contain has not duplicate number");
    }
}