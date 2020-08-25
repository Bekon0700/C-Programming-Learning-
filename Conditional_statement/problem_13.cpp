#include<stdio.h>

int main()
{
    char C;

    scanf("%s", &C);

    if((C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' ) || (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U' ))
    {
        printf("%s is a vowel\n", &C);
    }
    else
    {
        printf("%s is a consonant\n", &C);
    }

    return 0;
}


