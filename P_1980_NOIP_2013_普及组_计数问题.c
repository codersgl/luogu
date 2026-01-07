#include <stdio.h>

int countX(int num, int x)
{
    int res = 0;

    while (num)
    {
        int c = num % 10;
        num = num / 10;

        if (c == x)
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int n, x;
    int res = 0;
    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; i++)
    {
        res += countX(i, x);
    }

    printf("%d", res);
    return 0;
}