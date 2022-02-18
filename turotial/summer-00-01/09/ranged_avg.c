#include <stdio.h>
#include <math.h>

int main()
{

    float score;
    char range;
    int aSum, bSum, cSum, dSum;
    int aCount, bCount, cCount, dCount;

    do
    {
        scanf("%d", &score);
        if (score == -1)
            break;

        printf("%f", score);
        score = ceil(score);

        if (score <= 20 && score > 15)
            range = 'A';
        else if (score <= 15 && score)
            range = 'B';
        else if (score <= 10 && score > 5)
            range = 'C';
        else if (score <= 5 && score >= 0)
            range = 'D';
        else
            range = 'E';

        switch (range)
        {
        case 'A':
            /* code */
            aSum += score;
            aCount++;
            break;

        case 'B':
            bSum += score;
            bCount++;
            break;

        case 'C':
            /* code */
            cSum += score;
            cCount++;
            break;

        case 'D':
            /* code */
            dSum += score;
            dCount++;
            break;

        default:
            break;
        }

    } while (1);

    printf("%d\n", aCount);
    printf("%d\n", bCount);
    printf("%d\n", cCount);
    printf("%d\n", dCount);

    return 0;
}