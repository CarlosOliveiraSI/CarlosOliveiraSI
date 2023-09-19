#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalArea = 0;
    int xi, xf, yi, yf;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &xi, &xf, &yi, &yf);
        totalArea += (xf - xi + 1) * (yf - yi + 1);
    }

    printf("%d\n", totalArea);

    return 0;
}

