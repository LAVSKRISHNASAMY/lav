#include<stdio.h>
#include<math.h>
void main()
{
    int n, sum = 0, rem = 0, cu = 0, t;
    printf ("enter a number");
    scanf("%d", &n);
    t= n;
    while (n != 0)
    {
        rem = number % 10;
        cu = pow(rem, 3);
        sum = sum + cub;
        n = n / 10;
    }
    if (sum == t)
        printf ("Yes");
    else
        printf ("No");
}
