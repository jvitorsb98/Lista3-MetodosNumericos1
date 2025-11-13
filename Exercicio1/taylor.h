#ifndef TAYLOR_H
#define TAYLOR_H

/**
 * @brief Calcula a função original f(x) = sin(2x) + cos(3x).
 * @param x Ponto de avaliação.
 * @return Valor de f(x).
 */
double f(double x);

/**
 * @brief Primeira derivada f'(x) = 2cos(2x) - 3sin(3x).
 * @param x Ponto de avaliação.
 * @return Valor de f'(x).
 */
double df(double x);

/**
 * @brief Segunda derivada f''(x) = -4sin(2x) - 9cos(3x).
 * @param x Ponto de avaliação.
 * @return Valor de f''(x).
 */
double d2f(double x);

/**
 * @brief Terceira derivada f'''(x) = -8cos(2x) + 27sin(3x).
 * @param x Ponto de avaliação.
 * @return Valor de f'''(x).
 */
double d3f(double x);

/**
 * @brief Polinômio de Taylor de ordem 2 em torno de π.
 * @param x Ponto onde o polinômio será avaliado.
 * @return Aproximação P2(x).
 */
double P2(double x);

/**
 * @brief Polinômio de Taylor de ordem 3 em torno de π.
 * @param x Ponto onde o polinômio será avaliado.
 * @return Aproximação P3(x).
 */
double P3(double x);

/**
 * @brief Erro absoluto entre f(x) e P2(x).
 * @param x Ponto de avaliação.
 * @return |f(x) - P2(x)|.
 */
double erro_P2(double x);

/**
 * @brief Erro absoluto entre f(x) e P3(x).
 * @param x Ponto de avaliação.
 * @return |f(x) - P3(x)|.
 */
double erro_P3(double x);

#endif
