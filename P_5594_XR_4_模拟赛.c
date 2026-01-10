#include <stdio.h>

char visited[1005][1005];
int res[1005];

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int day;
            scanf("%d", &day);

            int d_idx = day - 1;

            if (visited[d_idx][j] == 0)
            {
                visited[d_idx][j] = 1;
                res[d_idx]++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}