#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int corners = a * 10 + b;
    int unitPrice = 19;
    int res = corners / unitPrice;
    printf("%d", res);
    return 0;
}