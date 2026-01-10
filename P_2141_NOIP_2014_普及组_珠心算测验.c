#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int num;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }

    return 0;
}