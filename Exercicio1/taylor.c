#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.141592653589793
#endif

#define A M_PI

/**
 * @brief f(x) = sin(2x) + cos(3x).
 */
double f(double x) {
    return sin(2*x) + cos(3*x);
}

/**
 * @brief f'(x) = 2cos(2x) - 3sin(3x).
 */
double df(double x) {
    return 2*cos(2*x) - 3*sin(3*x);
}

/**
 * @brief f''(x) = -4sin(2x) - 9cos(3x).
 */
double d2f(double x) {
    return -4*sin(2*x) - 9*cos(3*x);
}

/**
 * @brief f'''(x) = -8cos(2x) + 27sin(3x).
 */
double d3f(double x) {
    return -8*cos(2*x) + 27*sin(3*x);
}

/**
 * @brief Polinômio de Taylor de ordem 2 em torno de A = π.
 */
double P2(double x) {
    return f(A) + df(A)*(x-A) + (d2f(A)/2.0)*(x-A)*(x-A);
}

/**
 * @brief Polinômio de Taylor de ordem 3 em torno de A = π.
 */
double P3(double x) {
    return f(A) + df(A)*(x-A) + (d2f(A)/2.0)*(x-A)*(x-A) + (d3f(A)/6.0)*(x-A)*(x-A)*(x-A);
}

/**
 * @brief Erro absoluto entre f(x) e P2(x).
 */
double erro_P2(double x) {
    return fabs(f(x) - P2(x));
}

/**
 * @brief Erro absoluto entre f(x) e P3(x).
 */
double erro_P3(double x) {
    return fabs(f(x) - P3(x));
}
