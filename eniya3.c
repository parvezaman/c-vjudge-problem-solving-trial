#include <stdio.h>
int main()
{
    int n, a, b, totalNeed;
    scanf("%d %d %d ", &n, &a, &b);

    totalNeed = n * a * b * 2;

    printf("%d", totalNeed);

    return 0;
}