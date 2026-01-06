#include <stdio.h>

int main()
{
    int maxUnhappyDegree = 0;
    int maxUnhappyDegreeDay = 0;
    int time1, time2;
    for (int i = 1; i <= 7; i++)
    {
        scanf("%d %d", &time1, &time2);
        int currentUnhappyDegree = time1 + time2 - 8;
        if (currentUnhappyDegree > 0)
        {
            if (currentUnhappyDegree > maxUnhappyDegree)
            {
                maxUnhappyDegreeDay = i;
                maxUnhappyDegree = currentUnhappyDegree;
            }
        }
    }

    printf("%d", maxUnhappyDegreeDay);
    return 0;
}