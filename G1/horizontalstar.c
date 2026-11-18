#include <stdio.h>
#include <math.h>

int main() {
    int r = 5;

    for (int y = -r; y <= r; y++) {
        for (int x = -2 * r; x <= 2 * r; x++) {
            double d = (x * x) / 4.0 + y * y;

            if (d >= r * r - r && d <= r * r + r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}