//// HACKER EARTH :- Cost of Balloons problem

/*
#include <stdio.h>

int main()
{
	int num, gbc, pbc, n, k, l, i, j, sum1 = 0, sum2 = 0, total = 0; // 'n' is no.of participants and gbc = green balloon cost and pbc = purple balloon cost.
    scanf("%d", &num);

	for(k = 1; k <= num; k++)
	{
		scanf("%d%d", &gbc, &pbc);
		scanf("%d", &n);

		for(l = 1; l <= n; l++)
		{
            if(k/2 == 0)
            {
                scanf("%d%d", &i, &j);
			    if(i == 1)
			    {
				    sum1 += gbc;
			    }

			    if(j == 1)
			    {
				    sum2 += pbc;
			    }
            }

            else
            {
                scanf("%d%d", &i, &j);
                if(i == 1)
			    {
				    sum1 += pbc;
			    }

			    if(j == 1)
			    {
			        sum2 += gbc;
			    }
            }
		}
        total += (sum1 + sum2);
        printf("%d\n", total);
        total = 0;
        sum1 = 0;
        sum2 = 0;
	}
	return 0;
}
*/

//// DISCUSSION ANSWER: 

#include<stdio.h>

int main()
{
    int g,n,p,t,s=0,s2=0;

    scanf("%d",&t);

    for(int k=0;k<t;k++)
    {
        int s=0,s2=0;

        scanf("%d%d",&g,&p);

        scanf("%d",&n);

        int a[n][2];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {   
                scanf("%d",&a[i][j]);
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(a[i][j]==1)
                {
                    if(j==0)
                    {
                        s=s+g;
                        s2=s2+p;
                    }
                    else if(j==1)
                    {
                        s=s+p;
                        s2=s2+g;
                    }
                }
            }
        }

        if(s<s2)
        {
            printf("%d\n",s);
        }

        else
        {
            printf("%d\n",s2);
        }
    }
}
