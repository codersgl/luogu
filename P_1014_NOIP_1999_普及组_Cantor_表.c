#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int i = 1;
    int is_up = 0;

    while (n > i)
    {

        n = n - i;
        i++;
        is_up = !is_up;
    }

    int numerator = is_up ? n : i + 1 - n;
    int denominator = i + 1 - numerator;

    printf("%d/%d", numerator, denominator);
    return 0;
}