#include <stdio.h>
#include <limits.h>

int getPrice(int n, int a, int b)
{
    int nums = (n + a - 1) / a;
    return nums * b;
}

int main()
{
    int n, numOfPencil, unitPrice;
    int minPrice = INT_MAX;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &numOfPencil, &unitPrice);
        int currentPrice = getPrice(n, numOfPencil, unitPrice);
        if (currentPrice < minPrice)
        {
            minPrice = currentPrice;
        }
    }
    printf("%d\n", minPrice);
    return 0;
}