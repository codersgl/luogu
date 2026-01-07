#include <stdio.h>

void reverse_output(int n)
{
    int digit;
    int flag = 0;

    while (n)
    {
        digit = n % 10;
        n /= 10;
        if (!flag && digit)
        {
            flag = digit ? 1 : 0;
        }
        if (flag)
        {
            printf("%d", digit);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0)
    {
        reverse_output(n);
    }
    else if (n < 0)
    {
        printf("-");
        n = -n;

        reverse_output(n);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}