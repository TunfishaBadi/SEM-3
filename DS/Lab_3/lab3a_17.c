#include <stdio.h>
void main()
{
    int m, n, size, temp, i;

    printf("Eenter the m and n:");
    scanf("%d %d", &m, &n);

    if (m > n)
    {
        size = m - n + 1;
        temp = n;
    }
    else
    {
        size = n - m + 1;
        temp = m;
    }

    int arr[size];
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        arr[i] = temp;
        temp++;
        sum = sum + arr[i];
    }
    printf("sum of number=%d", sum);
}