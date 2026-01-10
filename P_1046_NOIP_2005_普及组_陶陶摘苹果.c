#include <stdio.h>

int main()
{
    int appleHeights[10];
    int taoTaoHeight = 0;
    int ans = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &appleHeights[i]);
    }

    scanf("%d", &taoTaoHeight);
    taoTaoHeight += 30;
    for (int i = 0; i < 10; i++)
    {
        if (appleHeights[i] <= taoTaoHeight)
        {
            ans++;
        }
    }

    printf("%d", ans);
    return 0;
}