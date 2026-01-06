#include <stdio.h>

int main()
{
    int month;
    int budget;
    int remain = 0;
    int saving = 0;

    for (int i = 1; i <= 12; i++)
    {
        scanf("%d", &budget);
        if (remain + 300 < budget)
        {
            printf("%d", -i);
            return 0;
        }
        else
        {
            int income = remain + 300;
            remain = (income - budget) % 100;
            saving += income - remain - budget;
        }
    }

    int res = saving * 1.2 + remain;
    printf("%d", res);

    return 0;
}