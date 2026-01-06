#include <stdio.h>

int main()
{
    int k, n;
    double S_n = 0;
    scanf("%d", &k);
    int i = 0;
    while (S_n <= k)
    {
        i++;
        S_n += (1.0 / i);
    }
    printf("%d", i);
    return 0;
}