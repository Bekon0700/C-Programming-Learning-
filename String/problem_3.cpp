#include<stdio.h>

int main()
{
    char word1[20], word2[20];

    scanf("%s",word1);

    scanf("%s",word2);

    int i=0;

    while(word1[i] != '\0')
    {
        i++;
    }

    int j = 0;

    while(word2[j] != '\0')
    {
        j++;
    }

    int flag = 1;

    if(i == j)
    {
        for(i=0; word1[i] != '\0'; i++)
        {
            if(word1[i] != word2[i])
            {
                flag=0;
                printf("No\n");
                break;
            }
        }
        if(flag == 1)
        {
            printf("Yes\n");
        }
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

