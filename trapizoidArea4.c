#include <stdio.h>
int main()
{
    int a, b, h, area;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &h);

    area = ((a + b) * h) / 2;
    printf("%d", area);

    return 0;
}