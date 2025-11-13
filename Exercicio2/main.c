#include <stdio.h>
#include <math.h>
#include "lagrange.h"

int main(void) {
    /* Pontos de interpolação dados no enunciado */
    const double x0 = 0.0;
    const double x1 = 0.6;
    const double x2 = 0.9;
    const double x3 = 1.1;

    /* Pontos onde queremos avaliar a função e os polinômios */
    const double pontos[] = {0.3, 0.75};
    const int n_pontos = 2;

    printf("Interpolacao de Lagrange para f(x) = ln(x+1)\n\n");
    printf("Pontos de interpolacao:\n");
    printf("x0 = %.2f, x1 = %.2f, x2 = %.2f, x3 = %.2f\n\n",
           x0, x1, x2, x3);

    printf("x    |    f(x)      P1(x)    erro_rel_P1   P2(x)    erro_rel_P2   P3(x)    erro_rel_P3\n");
    printf("----------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n_pontos; ++i) {
        double x = pontos[i];

        double fx  = f(x);
        double p1  = P1(x, x0, x3);                 /* grau 1: pontos x0 e x3 */
        double p2  = P2(x, x0, x1, x3);             /* grau 2: pontos x0, x1, x3 */
        double p3  = P3(x, x0, x1, x2, x3);         /* grau 3: pontos x0, x1, x2, x3 */

        double e1_rel = fabs((fx - p1) / fx);
        double e2_rel = fabs((fx - p2) / fx);
        double e3_rel = fabs((fx - p3) / fx);

        printf("%.2f | %9.6f  %9.6f  %12.6e  %9.6f  %12.6e  %9.6f  %12.6e\n",
               x, fx, p1, e1_rel, p2, e2_rel, p3, e3_rel);
    }

    return 0;
}
