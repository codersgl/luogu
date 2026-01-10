#include <stdio.h>

int main()
{
    char isbn[14];
    scanf("%s", isbn);

    int sum = 0, count = 1;

    for (int i = 0; i < 11; i++)
    {
        if (isbn[i] != '-')
        {
            sum += (isbn[i] - '0') * count;
            count++;
        }
    }

    char right_code = (sum % 11 == 10) ? 'X' : (sum % 11 + '0');

    if (isbn[12] == right_code)
    {
        printf("Right");
    }
    else
    {
        isbn[12] = right_code;
        printf("%s", isbn);
    }

    return 0;
}