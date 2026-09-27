#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main()
{

    int n, i, j;
    printf("Enter no of words:");
    scanf("%d", &n);

    char words[n][100];

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter words:");
        scanf("%s", words[i]);
    }

    // <--- rendom code --->
    srand(time(NULL));
    int random = rand() % n;

    printf("\nSelected word:%s\n", words[random]);

    // <--- anagram code --->
    char anagram[50];

    printf("Enter anagram:");
    scanf("%s", anagram);

    if (strlen(anagram) != strlen(words[random]))
    {
        printf("Not found");
        return 0;
    }

    char temp;

    // to sort random words
    int len = strlen(words[random]);

    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((words[random][i]) > (words[random][j]))
            {
                temp = (words[random][i]);
                (words[random][i]) = (words[random][j]);
                (words[random][j]) = temp;
            }
        }
    }

    // to sort anagram
    int len2 = strlen(anagram);

    for (i = 0; i < len2 - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (anagram[i] > anagram[j])
            {
                temp = anagram[i];
                anagram[i] = anagram[j];
                anagram[j] = temp;
            }
        }
    }

    if (strcmp(words[random], anagram) == 0)
    {
        printf("\nIt is anagran");
    }
    else
    {
        printf("\nIt is not anagran");
    }
}