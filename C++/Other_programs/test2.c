//// CODE: HACKER-EARTH - Seating Arrangement.

#include <stdio.h>

int main()
{
    long int N[100000];
    long int T,i;
    int p, r;

    scanf("%ld", &T);

    for(i = 0; i < T; i++)
    {
        scanf("%ld", &N[i]);
    }

    for(i = 0; i < T; i++)
    {
        r = N[i];
        p = r%12;

        switch(p)
        {
            case 1:
                printf("%d WS\n", r+11);
                break;

            case 2:
                printf("%d MS\n", r+9);
                break;

            case 3:
                printf("%d AS\n", r+7);
                break;

            case 4:
                printf("%d AS\n", r+5);
                break;

            case 5:
                printf("%d MS\n", r+3);
                break;

            case 6:
                printf("%d WS\n", r+1);
                break;

            case 7:
                printf("%d WS\n", r-1);
                break;

            case 8:
                printf("%d MS\n", r-3);
                break;

            case 9:
                printf("%d AS\n", r-5);
                break;

            case 10:
                printf("%d AS\n", r-7);
                break;

            case 11:
                printf("%d MS\n", r-9);
                break;

            case 0:
                printf("%d WS\n", r-11);
                break;
        }
    }
    return 0;
}

