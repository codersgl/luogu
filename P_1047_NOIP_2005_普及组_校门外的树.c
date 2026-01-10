#include <stdio.h>

int main()
{
    int l, m;
    int u, v;
    int res = 0;
    scanf("%d %d", &l, &m);

    // Initialize trees
    int trees[l + 1];
    for (int i = 0; i <= l; i++)
    {
        trees[i] = 1;
    }

    // Remove tree
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++)
        {
            trees[j] = 0;
        }
    }

    // Count trees
    for (int i = 0; i <= l; i++)
    {
        if (trees[i])
        {
            res++;
        }
    }

    printf("%d", res);
    return 0;
}
