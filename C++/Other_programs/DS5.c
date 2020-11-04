//// CODE: DATA STRUCTURES > Problem-5
/*   Define a Recursive factorial function. Evaluate the following series for N terms using a function which takes 'x' in degrees.
     and a pointer to factorial function as Parameters.

        Sin(x) = x - x^3/3! + x^5/5! - ...
*/

#include <stdio.h>
#include <math.h>

int fac(int x)
{
	int i,fac=1;

	for( i = 1; i <= x; i++)
		fac=fac*i;
	
    return fac;
}

int main()
{
	float x, Q, sum=0;
	int i, j, N;

	printf("Enter the value of x of sinx series: ");
	scanf("%f",&x);

	printf("Enter the value of 'N' upto which you want to expand the series: ");
	scanf("%d",&N);

	Q=x;
	x = x*(3.1415/180);

	for(i = 1, j = 1; i <= N; i++, j += 2)
	{
		if(i%2!=0)
		{
			sum += pow(x,j)/fac(j);
		}
		else
			sum -= pow(x,j)/fac(j);
	}

	printf("\nSin(%0.1f): %.4f\n",Q,sum);
	return 0;
}

/* Test Case Output:

Enter the value of x of sinx series: 60.0
Enter the value of 'N' upto which you want to expand the series: 4

Sin(60.0): 0.8660

*/