#include <stdio.h>
#define limit 100000

int main() {
    int a, b, c, d;

    printf("Ramanujan numbers up to %d:\n\n", limit);

    for (a = 1; a * a * a < limit; a++) {
        for (b = a; a * a * a + b * b * b < limit; b++) {
            int sum1 = a * a * a + b * b * b;

            for (c = a + 1; c * c * c < limit; c++) {
                for (d = c; c * c * c + d * d * d < limit; d++) {
                    int sum2 = c * c * c + d * d * d;

                    if (sum1 == sum2 && (a != c || b != d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
