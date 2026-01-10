#include <stdio.h>
#include <stdlib.h>

int main()
{
    int capacity = 4;
    int count = 0;

    int *arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }

    int num;
    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (count >= capacity)
        {
            capacity *= 2;
            int *new_arr = (int *)realloc(arr, capacity * sizeof(int));
            if (new_arr == NULL)
            {
                free(arr);
                return 1;
            }
            arr = new_arr;
        }

        arr[count++] = num;
    }

    while (count > 0)
    {
        printf("%d ", arr[--count]);
    }

    // free memory
    free(arr);
    arr = NULL;
    return 0;
}