#include <stdio.h>
int main()
{
    int t, x;
    scanf("%d ", &t);
    scanf("%d", &x);
    double time;
    time = (double)t / (double)x;
    printf("%lf", time);
    return 0;
}