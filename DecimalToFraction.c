#include <stdio.h>
#include <math.h>
int GCD(int, int);
int main()
{
	int f, c, i, gcd;
	float n, n1, a, b, N, p;
	again:
	f=0, c=1;
	printf("Enter a decimal non-integral number to see it's fractional form: ");
	scanf("%f", &n);
	n1 = n;
	if (ceil(n) != floor(n))
	{
		for (i = 0; f != c; i++)
		{
			n1 *= 10;
			f = floor(n1);
			c = ceil(n1);
		}
		p = pow(10, i);
		N = n * p;
				//printf("Integral %g,%g", N,p);
		if (floor(p / N) == ceil(p / N))
			printf("\n\t%g=1/%g\n\n", n, p / N);
		else
		{
			gcd=GCD(N,p);
			printf("\n\t%g=%g/%g\n\n", n, N / gcd, p / gcd);
		}
	}
	else
		printf("\nYour number %g is an integral number...\n\n", n);
	goto again;
}

int GCD(int n1, int n2)
{
	int gcd,i;
	for (i = 1; i <= n1 && i <= n2; ++i)
	{
		// Checks if i is factor of both integers
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	return gcd;
}