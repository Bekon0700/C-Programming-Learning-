#include<stdio.h>

int main()
{
    char word1[40], word2[40];

    scanf("%s",word1);

    int i=0;

    while(word1[i] != '\0')
    {
        i++;
    }

    int j = i-1, k=0;

    while(j >= 0)
    {
        word2[k] = word1[j];

        k++;

        j--;
    }

    word2[k] = '\0';


    int flag = 1;

    for(int j = 0; word1[j] != '\0'; j++)
    {
        if(word1[j] != word2[j])
        {
            flag = 0;
            printf("Not a palindrome.\n");
            break;
        }
    }

    if(flag == 1)
    {
        printf("Yes it's palindrome.\n");
    }

    return 0;
}

