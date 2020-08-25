#include<stdio.h>

int main()
{
    char C;

    scanf("%s", &C);

    if(C >= 47 && C <= 57)
    {
        printf("%s is a digit.\n", &C);
    }
    else if(C >= 65 && C <= 90)
    {
        printf("%s is  uppercase alphabet.\n", &C);
    }
    else if(C >= 97 && C <= 122)
    {
        printf("%s is lowercase alphabet.\n", &C);
    }
    else
    {
        printf("%s is not an alphabet.\n", &C);
    }

    return 0;
}

