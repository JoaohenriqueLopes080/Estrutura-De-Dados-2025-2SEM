## Passo 1: Criação Do Arquivo de Cabeçalho(exercicio.h)
Criar um arquivo de Cabeçalho, que serve como a interface da biblioteca de funções.
- Ele dirá ao compilador quais funções existem e como chamá-las, sem revelar a lógica interna.
- Cabeçalho atual → `exercicio.h`

**Importante saber dentro do arquivo.h**

🧠 **Entendimento (Método Educativo)**

- **Guardas de Inclusão** (`#ifndef`, `#define`, `#endif`): São cruciais para evitar que o compilador encontre a mesma declaração de função (o mesmo protótipo) mais de uma vez, o que geraria um erro. É uma prática padrão em arquivos `.h`.

- **Protótipo da Função**: `void imprime_matriz(int m, int n, int* mat);` é apenas a declaração. Ela termina com ponto e vírgula (`;`), pois não contém o código de fato.

## Passo 2: Criação de arquivo de Implementação
- Implementar a lógica real do que foi dado no cabeçalho em um novo arquivo.
    - Arquivo Usado: `exercicio.c`

## Passo 3: Criação Do Arquivo Principal (main.c)
Arquivo com função `main()`, responsável por toda a lógica e execução. Ex: pedir os dados do usuário, alocar a memória, preencher a matriz e chamar a função `imprime_matriz` que é definida em `exercicio.c`.

- Criar arquivo `main.c`

---

// Usei IA para isso, mas foi bom aprender.

### Documentação - Extra

- `@file`: Nome do arquivo sendo documentado.
- `@brief`: Breve descrição (resumo) do que o elemento seguinte faz.

💡 **Por Que Usar? (Método Educativo)**

Embora o compilador C os ignore completamente, essas tags são uma ótima prática de programação por três razões principais:

1. **Geração Automática de Documentos**: Ferramentas como o Doxygen leem esses comentários padronizados e criam automaticamente manuais em HTML ou PDF, facilitando a vida de outros programadores (ou de você mesmo no futuro!) que precisem entender o projeto rapidamente.

2. **Organização**: Força o programador a pensar e resumir a função de cada arquivo e função.

3. **Clareza**: A estrutura `/** ... */` com `@file`, `@brief`, `@param` (parâmetro) e `@return` (retorno) é um padrão que torna o código muito mais legível.


