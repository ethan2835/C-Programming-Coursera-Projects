#include <stdio.h>

int main(void)
{

  float f = 0.12345678901234567890f;
    double d = 0.12345678901234567890;

       printf("On My PC:\n");
    printf("Size of float  = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n\n", sizeof(double));

    printf("Float value with many digits:  %.15f\n", f);
    printf("Double value with many digits:  %.15f\n", d);

    printf("\n--- Long Double ---\n");
    printf("Size of long double = %zu bytes\n", sizeof(long double));
    long double ld = 0.123456789012345678901234567890L;
    printf("Long double value: %.25Lf\n", ld);

    return 0;

    }
