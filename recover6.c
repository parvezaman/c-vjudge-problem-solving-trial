#include <stdio.h>
int main()
{
    int ageAbul, ageBabul, avg;
    scanf("%d", &ageAbul);
    scanf("%d", &avg);
    ageBabul = (avg * 2) - ageAbul;
    printf("%d", ageBabul);
    return 0;
}