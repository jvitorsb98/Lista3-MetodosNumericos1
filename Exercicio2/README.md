# Interpolação Polinomial de Lagrange — Exercício 2

Este diretório contém a implementação dos polinômios de interpolação de **Lagrange** de graus 1, 2 e 3 para a função

\[
f(x) = \ln(x + 1),
\]

utilizando os pontos de interpolação fornecidos no enunciado:

- \(x_0 = 0{,}0\)
- \(x_1 = 0{,}6\)
- \(x_2 = 0{,}9\)
- \(x_3 = 1{,}1\)

O objetivo é:

1. Construir os polinômios de Lagrange nos seguintes casos:
   - **Grau 1:** usando os pontos \(x_0\) e \(x_3\);
   - **Grau 2:** usando os pontos \(x_0, x_1, x_3\);
   - **Grau 3:** usando os pontos \(x_0, x_1, x_2, x_3\).

2. Utilizar esses polinômios para aproximar a função nos pontos:
   - \(x = 0{,}3\)
   - \(x = 0{,}75\)

3. Calcular o **desvio relativo** entre o valor verdadeiro \(f(x)\) e cada aproximação \(P_1(x)\), \(P_2(x)\) e \(P_3(x)\).

4. (Opcional, via Python) Gerar gráficos comparando:
   - a função \(f(x)\),
   - os pontos de interpolação,
   - e os polinômios \(P_1\), \(P_2\) e \(P_3\).

---

## 📂 Arquivos do projeto

```text
├── main.c           # Programa principal: avalia f(x), P1, P2, P3 e calcula erros relativos
├── lagrange.c       # Implementação dos polinômios de Lagrange
├── lagrange.h       # Cabeçalho com protótipos e comentários Doxygen
├── Makefile         # Compilação, execução e limpeza
├── plot_lagrange.py # Script em Python para gerar gráficos comparando f, P1, P2 e P3 (opcional)
└── README.md        # Este arquivo
```

---

## ⚙️ Compilação e execução (C)

Para compilar o projeto em C:

```bash
make
```

Para executar o programa:

```bash
make run
```

Para remover arquivos objeto e o executável:

```bash
make clean
```

A saída padrão do programa apresenta, para cada ponto de avaliação, o valor verdadeiro de \(f(x)\), os valores aproximados pelos polinômios e o desvio relativo correspondente:

```text
x    |    f(x)      P1(x)    erro_rel_P1   P2(x)    erro_rel_P2   P3(x)    erro_rel_P3
----------------------------------------------------------------------------------------
0.30 |   ...        ...       ...          ...        ...         ...        ...
0.75 |   ...        ...       ...          ...        ...         ...        ...
```

---

## 📈 Geração de gráficos (Python)

O arquivo `plot_lagrange.py` pode ser utilizado para:

- definir os mesmos pontos de interpolação \(x_0, x_1, x_2, x_3\);
- reconstruir os polinômios \(P_1, P_2, P_3\) em Python;
- traçar, em um mesmo gráfico:
  - a curva de \(f(x) = \ln(x + 1)\) em um intervalo apropriado (por exemplo, \([0, 1{,}2]\));
  - os pontos de interpolação;
  - as curvas dos polinômios interpoladores.

Um esboço típico de uso seria:

```bash
python plot_lagrange.py
```

O gráfico produzido pode ser utilizado no relatório para comparar visualmente a qualidade das aproximações em diferentes regiões do intervalo.

---

## 🧠 Interpretação dos resultados (para o relatório)

A análise numérica e gráfica permite discutir:

- como o aumento do grau do polinômio de Lagrange afeta a precisão;
- em quais regiões do intervalo cada polinômio apresenta melhor desempenho;
- o comportamento do erro relativo em torno dos pontos de interpolação e entre eles.
