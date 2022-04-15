#include <stdio.h>
int main()
{
    int H, W, h, w, left;
    scanf("%d", &H);
    scanf("%d\n", &W);
    scanf("%d", &h);
    scanf("%d", &w);

    left = (H * W) - (W * h + H * w - h * w);

    printf("%d", left);

    return 0;
}