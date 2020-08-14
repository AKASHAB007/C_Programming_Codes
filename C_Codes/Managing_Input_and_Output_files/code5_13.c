//// CODE: P:129 > 5.13 - To convert Dollar into INR and EURO. 
    // NOTE - 1 Dollar = 75 INR.
    //*       1 Dollar = 0.84 EURO.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, INR;
    float EURO;

    printf("Enter the Cost in Dollars: ");
    scanf("%d",&n);

    INR = n * 75;
    EURO = n * 0.84;

    printf("%d Dollars = %d INR\n", n, INR);

    printf("%d Dollars = %.2f EURO\n", n, EURO);

    return 0;
}