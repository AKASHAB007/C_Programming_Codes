//// CODE: P:128 > 5.3 - To read the following numbers, round them off to the nearest integer and print out the results in integer form:
/*                      (a) sample input 1: 35.70
                        (b) sample input 2: 50.21
                        (c) sample input 3: -23.73
                        (d) sample input 4: -46.45
*/

#include <stdio.h>

int main()
{
    float a;

    printf("Enter the number to be rounded-off to the nearest integers\n");
    scanf("%f",&a);

    printf("%.1f\n%.f\n",a,a);

    return 0;
}

/* OUTPUT:
Enter the number to be rounded-off to the nearest integers   //// Sample input 1: 35.70
35.70
35.7
36

Enter the number to be rounded-off to the nearest integers   //// Sample input 2: 50.21 
50.21
50.2
50

Enter the number to be rounded-off to the nearest integers   //// Sample input 3: -23.73
-23.73
-23.7
-24

Enter the number to be rounded-off to the nearest integers   //// Sample input 4: -46.45
-46.45
-46.5
-46


*/