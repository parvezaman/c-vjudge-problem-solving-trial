#include <stdio.h>

int main()
{
    int harryShooted, larryShooted, totalCans, harryNotShooted, larryNotShooted;
    scanf("%d %d", &harryShooted, &larryShooted);
    totalCans = harryShooted + larryShooted - 1;

    harryNotShooted = totalCans - harryShooted;
    larryNotShooted = totalCans - larryShooted;

    printf("%d %d", harryNotShooted, larryNotShooted);

    return 0;
}