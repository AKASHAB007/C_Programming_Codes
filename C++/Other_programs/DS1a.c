//// CODE: DATA STRUCTURES > Problem-1 (a)
/* Find the Sum of N numbers. Allocate Dynamic memory to these numbers */

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i = 0, n, j = 1, sum = 0;
    int *ptr;
 
    printf("Enter the value of N upto which the sum should be found: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int *)); //* Size of 'n' blocks is allocated using malloc.

    for(i = 0; i <= n-1; i++)
    {
        printf("Enter the %d-number: ", j++);
        scanf("%d", ptr+i);

        sum += *(ptr+i);
    }

    printf("\nSum of %d numbers = %d\n", n, sum);

    printf("\n%u is stored at address %u", *(ptr+0), ptr);
    printf("\n%u is stored at address %u", *(ptr+1), ptr+1);
    printf("\n%u is stored at address %u", *(ptr+2), ptr+2);
    printf("\n%u is stored at address %u", *(ptr+3), ptr+3);
    printf("\n%u is stored at address %u\n", *(ptr+4), ptr+4);

    printf("\n");
    return 0;
}

/* Test Case Output:

Enter the value of N upto which the sum should be found: 5
Enter the 1-number: 1
Enter the 2-number: 9
Enter the 3-number: 6
Enter the 4-number: 3
Enter the 5-number: 7

Sum of 5 numbers = 26

1 is stored at address 1508096704
9 is stored at address 1508096705
6 is stored at address 1508096706
3 is stored at address 1508096707
7 is stored at address 1508096708

*/