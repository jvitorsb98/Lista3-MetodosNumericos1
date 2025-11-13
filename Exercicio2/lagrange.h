/**
 * @file lagrange.h
 * @brief Protótipos das funções de interpolação de Lagrange
 *        para f(x) = ln(x + 1).
 */

#ifndef LAGRANGE_H
#define LAGRANGE_H

/**
 * @brief Função original f(x) = ln(x + 1).
 *
 * @param x Ponto onde a função será avaliada.
 * @return Valor de ln(x + 1). Domínio: x > -1.
 */
double f(double x);

/**
 * @brief Polinômio de Lagrange de grau 1 (interpolação linear).
 *
 * Constrói a reta que interpola a função nos pontos x0 e x3.
 *
 * @param x  Ponto onde se deseja aproximar a função.
 * @param x0 Primeiro ponto de interpolação.
 * @param x3 Segundo ponto de interpolação.
 * @return Valor aproximado de f(x) pela interpolação linear.
 */
double P1(double x, double x0, double x3);

/**
 * @brief Polinômio de Lagrange de grau 2.
 *
 * Constrói o polinômio quadrático que interpola a função
 * nos pontos x0, x1 e x3.
 *
 * @param x  Ponto onde se deseja aproximar a função.
 * @param x0 Primeiro ponto de interpolação.
 * @param x1 Segundo ponto de interpolação.
 * @param x3 Terceiro ponto de interpolação.
 * @return Valor aproximado de f(x) pelo polinômio quadrático.
 */
double P2(double x, double x0, double x1, double x3);

/**
 * @brief Polinômio de Lagrange de grau 3.
 *
 * Constrói o polinômio cúbico que interpola a função
 * nos pontos x0, x1, x2 e x3.
 *
 * @param x  Ponto onde se deseja aproximar a função.
 * @param x0 Primeiro ponto de interpolação.
 * @param x1 Segundo ponto de interpolação.
 * @param x2 Terceiro ponto de interpolação.
 * @param x3 Quarto ponto de interpolação.
 * @return Valor aproximado de f(x) pelo polinômio cúbico.
 */
double P3(double x, double x0, double x1, double x2, double x3);

#endif /* LAGRANGE_H */
