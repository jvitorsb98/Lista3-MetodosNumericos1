# Exercício 1 – Aproximação via Polinômios de Taylor

Este exercício considera a função

\[
f(x) = \sin(2x) + \cos(3x)
\]

e tem como objetivo aproximar valores da função utilizando polinômios de Taylor de segunda e terceira ordem em torno de \( x = \pi \), além de analisar os erros envolvidos nas aproximações.

---

## 📌 Estrutura do exercício

O enunciado solicita:

### **a)**  
Obter os polinômios de Taylor:

- \( P_2(x) \): Taylor de grau 2  
- \( P_3(x) \): Taylor de grau 3  

ambos aproximando a função em torno de \( x = \pi \).

---

### **b)**  
Utilizar os polinômios \( P_2(x) \) e \( P_3(x) \) para aproximar a função nos pontos:

- \( x_1 = \pi + 0.1 \)
- \( x_2 = \pi - 0.5 \)

Calcular os **desvios absolutos**:

\[
|f(x) - P_2(x)|, \quad |f(x) - P_3(x)|
\]

---

### **c)**  
Obter um limite superior para o erro dos polinômios de Taylor \( P_2(x) \) e \( P_3(x) \), utilizando a fórmula geral do resto de Taylor:

\[
R_n(x) = \frac{f^{(n+1)}(\xi)}{(n+1)!}(x - a)^{n+1}
\]

---

### **d)**  
Comentar sobre a precisão das aproximações em cada ponto e discutir:

- Qual aproximação é mais precisa?
- Por que a precisão se altera entre \( x_1 \) e \( x_2 \)?
- Como melhorar a precisão para o ponto \( x_2 \)?

---

## 📁 Estrutura dos arquivos

```
Exercicio1/
│
├── main.c          # Testa f(x), P2(x), P3(x) e erros nos pontos x1 e x2
├── taylor.c        # Implementação de f(x), derivadas e polinômios de Taylor
├── taylor.h        # Cabeçalho com as declarações e comentários Doxygen
├── Makefile        # Compilação automática (gera o executável 'taylor')
└── README.md       # Este arquivo
```
