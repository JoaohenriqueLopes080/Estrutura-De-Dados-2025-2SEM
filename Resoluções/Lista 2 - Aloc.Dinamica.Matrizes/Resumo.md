💾 Alocação Dinâmica de Matrizes em C: Comparativo
## 📊 Comparativo de Alocação Dinâmica

A alocação dinâmica ocorre na área de memória conhecida como **Heap** e permite que você defina o tamanho das suas estruturas de dados durante a execução do programa. A forma como você aloca define a estrutura física da matriz na memória e a sintaxe que você usará para acessá-la.

---

## 1️⃣ Vetor Simples (Linear) – `int*` (Sua Implementação)

Nesta abordagem, a matriz é tratada como um único vetor contínuo de memória.

| Característica | Detalhes |
|---|---|
| **Estrutura de Memória** | Um único bloco contínuo (todos os elementos lado a lado) |
| **Alocação** | Apenas uma chamada a `malloc()`: `int* mat = (int*) malloc(M * N * sizeof(int));` |
| **Tipo de Ponteiro** | `int*` (Ponteiro para um inteiro) |
| **Sintaxe de Acesso** | `mat[i * N + j]` (fórmula: linha × num_colunas + coluna) |
| **Vantagens** | ✅ Alta eficiência (Cache); Dados contíguos = acesso rápido; Simples de gerenciar |
| **Desvantagens** | ❌ Sintaxe de acesso menos intuitiva |

**🧠 Analogia:** Pense como um rolo de papel toalha totalmente esticado. A matriz inteira está em uma linha reta e você usa a fórmula para calcular onde a "linha" e "coluna" desejadas começam.

---

## 2️⃣ Vetor de Ponteiros (Matriz de Ponteiros) – `int**`

Esta abordagem imita a sintaxe de uma matriz 2D. A memória é fragmentada em vários blocos, um para cada linha.

| Característica | Detalhes |
|---|---|
| **Estrutura de Memória** | Múltiplos blocos separados: vetor de ponteiros + um bloco por linha |
| **Alocação** | M+1 chamadas a `malloc()`: 1 para o vetor + M em loop para cada linha |
| **Tipo de Ponteiro** | `int**` (Ponteiro para ponteiro) |
| **Sintaxe de Acesso** | `mat_ptr[i][j]` (Sintaxe natural e intuitiva) |
| **Vantagens** | ✅ Sintaxe intuitiva; Permite matrizes irregulares (jagged) |
| **Desvantagens** | ❌ Baixa eficiência; Acesso mais lento; Complexo de gerenciar |

**🧠 Analogia:** Pense como um índice de livros. Cada entrada aponta para um livro separado em algum lugar da biblioteca. Para acessar uma palavra, você consulta o índice e vai até o livro.

---

## 📋 Quadro Comparativo Final

| Característica | Vetor Simples (`int*`) | Vetor de Ponteiros (`int**`) |
|---|---|---|
| **Contiguidade** | Contígua | Não Contígua |
| **Desempenho** | Melhor (cache eficiente) | Pior (desalinhamento) |
| **Sintaxe** | `[i * N + j]` | `[i][j]` |

**💡 Conclusão:** Para matrizes retangulares de tamanho fixo, a alocação como **Vetor Simples** é a escolha preferida em C devido à sua eficiência.
