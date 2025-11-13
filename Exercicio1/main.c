#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.141592653589793
#endif

#define A M_PI

// Declarações (assumindo que estão em outro arquivo .c)
double f(double x);
double P2(double x);
double P3(double x);
double erro_P2(double x);
double erro_P3(double x);

int main(void) {

    double x1 = A + 0.1;
    double x2 = A - 0.5;

    printf("Avaliacao nos pontos:\n");
    printf("x1 = pi + 0.1\n");
    printf("x2 = pi - 0.5\n\n");

    printf("---------------------------------------------------------------\n");
    printf("   x          f(x)         P2(x)        Erro P2      P3(x)         Erro P3\n");
    printf("---------------------------------------------------------------\n");

    printf("%8.5f   %10.6f   %10.6f   %10.6f   %10.6f   %10.6f\n",
           x1, f(x1), P2(x1), erro_P2(x1), P3(x1), erro_P3(x1));

    printf("%8.5f   %10.6f   %10.6f   %10.6f   %10.6f   %10.6f\n",
           x2, f(x2), P2(x2), erro_P2(x2), P3(x2), erro_P3(x2));

    return 0;
}
