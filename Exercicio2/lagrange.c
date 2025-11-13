#include <stdio.h>
#include <math.h>

/**
 * f(x) = ln(x+1)
 * Função usada para todos os polinômios de interpolação.
 */
double f(double x){
    return log(x + 1.0);
}


/* ============================================================
 *  (a) Polinômio de grau 1 usando os pontos x0 e x3
 *
 *  Dados do problema:
 *      x0 = 0.0
 *      x3 = 1.1
 *
 *  P1(x) interpola f(x) passando exatamente por:
 *      (x0, f(x0)) e (x3, f(x3))
 * ============================================================ */
double P1(double x, double x0, double x3){

    double L0 = (x - x3) / (x0 - x3);
    double L3 = (x - x0) / (x3 - x0);

    return f(x0) * L0 + f(x3) * L3;
}


/* ============================================================
 *  (b) Polinômio de grau 2 usando os pontos x0, x1 e x3
 *
 *  Dados do problema:
 *      x0 = 0.0
 *      x1 = 0.6
 *      x3 = 1.1
 *
 *  P2(x) interpola f(x) passando exatamente por:
 *      (x0, f(x0)), (x1, f(x1)), (x3, f(x3))
 * ============================================================ */
double P2(double x, double x0, double x1, double x3){

    double L0 = ((x - x1) * (x - x3)) / ((x0 - x1) * (x0 - x3));
    double L1 = ((x - x0) * (x - x3)) / ((x1 - x0) * (x1 - x3));
    double L3 = ((x - x0) * (x - x1)) / ((x3 - x0) * (x3 - x1));

    return f(x0) * L0 + f(x1) * L1 + f(x3) * L3;
}


/* ============================================================
 *  (c) Polinômio de grau 3 usando os pontos x0, x1, x2 e x3
 *
 *  Dados do problema:
 *      x0 = 0.0
 *      x1 = 0.6
 *      x2 = 0.9
 *      x3 = 1.1
 *
 *  P3(x) interpola f(x) passando exatamente por:
 *      (x0, f(x0)), (x1, f(x1)), (x2, f(x2)), (x3, f(x3))
 * ============================================================ */
double P3(double x, double x0, double x1, double x2, double x3){
    
    double L0 = ((x - x1) * (x - x2) * (x - x3)) /
                ((x0 - x1) * (x0 - x2) * (x0 - x3));

    double L1 = ((x - x0) * (x - x2) * (x - x3)) /
                ((x1 - x0) * (x1 - x2) * (x1 - x3));

    double L2 = ((x - x0) * (x - x1) * (x - x3)) /
                ((x2 - x0) * (x2 - x1) * (x2 - x3));

    double L3 = ((x - x0) * (x - x1) * (x - x2)) /
                ((x3 - x0) * (x3 - x1) * (x3 - x2));

    return f(x0) * L0 + f(x1) * L1 + f(x2) * L2 + f(x3) * L3;
}
