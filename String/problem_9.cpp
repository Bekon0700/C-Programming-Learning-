#include<stdio.h>

int main()
{
    char word[50];

    scanf("%s",word);

    int j=0;

    long long int n = 0;

    while(word[j] != '\0')
    {
        n = n * 10 + word[j] - '0';

        j++;
    }

    printf("%lld\n",n);

    return 0;
}

