#include <stdio.h>
int main()
{
    int n, on, rem, result = 0;
    printf("Enter a integer: ");
    scanf("%d", &n);
    on = n;
    while (on != 0)
    {
        rem = on%10;
        result += rem*rem*rem;
        on/= 10;
    }

   if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
