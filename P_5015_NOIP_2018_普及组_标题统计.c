#include <stdio.h>

int main()
{
    int res = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            continue;
        }
        res++;
    }

    printf("%d", res);
    return 0;
}