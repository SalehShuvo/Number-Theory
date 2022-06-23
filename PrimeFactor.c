#include <stdio.h>

int checkPrime(int n)
{
    int flag = 1;
    for (int j = 2; j <= n / 2; j++)
    {
        if (n % j == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        return 1;
    }
    else
        return 0;
}

int main(void)
{
    int n, n1, i, j, count = 0, prime = 0;
    printf("Enter an integer to know it's prime factorization: ");
    scanf("%d", &n);

    if (checkPrime(n) == 1)
    {
        printf("%d = %d", n, n);
    }
    else
    {
        printf("%d = ", n);

        for (i = 2; i <= n / 2; i++)
        {
            n1 = n;
            if (checkPrime(i) == 1 && n % i == 0)
            {
                for (count = 0; n1 % i == 0; count++)
                {
                    n1 /= i;
                }

                if (prime == 0)
                {
                    if (count == 1)
                        printf("%d", i);
                    else
                        printf("%d^%d", i, count);
                }
                else
                {
                    if (count == 1)
                        printf(" * %d", i);
                    else
                        printf(" * %d^%d", i, count);
                }
                prime++;
            }
        }
    }
}