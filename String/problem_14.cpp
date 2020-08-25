#include<stdio.h>

int main()
{
    char word1[50], arr[50];

    gets(word1);

    int i=0;

    while(word1[i] != '\0')
    {
        arr[i] = 0;

        for(int j=0; word1[j] != '\0'; j++)
        {
            if(word1[i] == word1[j])
            {
                arr[i]++;
            }
        }

        i++;
    }

    arr[i] = '\0';

    int max=-1, max_pos;

    for(int j=0; arr[j] != '\0'; j++)
    {
        if(arr[j] > max)
        {
            max_pos = j;
            max = arr[j];
        }
    }

    printf("%c\n",word1[max_pos]);

    return 0;
}
