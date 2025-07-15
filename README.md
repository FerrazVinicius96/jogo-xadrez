♟️ Projeto Completo: Simulador de Movimentos de Peças de Xadrez em C
====================================================================

Níveis: Novato → Aventureiro → Mestre  
Linguagem: C  
Conceitos-chave: Estruturas de repetição, loops aninhados, recursividade, controle de fluxo

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo Geral](#🎯-objetivo-geral)
- [🧩 Níveis e Desafios](#🧩-níveis-e-desafios)
  - [Nível Novato](#nível-novato)
  - [Nível Aventureiro](#nível-aventureiro)
  - [Nível Mestre](#nível-mestre)
- [✅ Requisitos Funcionais](#✅-requisitos-funcionais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [📤 Exemplo de Saída Esperada](#📤-exemplo-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dicas Finais](#💡-dicas-finais)

🎯 Objetivo Geral
------------------
Desenvolver um simulador didático em linguagem C para demonstrar os movimentos das principais peças do xadrez (Torre, Bispo, Rainha e Cavalo), evoluindo gradualmente o uso de estruturas de repetição simples até recursividade e loops complexos.

🧩 Níveis e Desafios
---------------------

🔹 Nível Novato
---------------
- **Torre:** 5 casas para a direita, usando `for`.
- **Bispo:** 5 casas na diagonal (cima + direita), usando `while`.
- **Rainha:** 8 casas para a esquerda, usando `do-while`.

🔹 Nível Aventureiro
---------------------
- **Cavalo:** Movimento em "L" (2 casas para baixo + 1 para a esquerda).  
- Deve ser implementado com **loops aninhados**, sendo um deles obrigatoriamente um `for`.

🔹 Nível Mestre
---------------
- **Torre, Bispo e Rainha:** Movimentos convertidos para **funções recursivas**.
- **Bispo:** Também deve ter uma versão com **loops aninhados** (loop externo vertical e interno horizontal).
- **Cavalo:** Movimento em "L" (2 casas para cima + 1 para a direita), com **loops aninhados**, múltiplas variáveis, `continue` e `break`.

✅ Requisitos Funcionais
-------------------------
- Movimentos definidos via variáveis no código.
- Estruturas utilizadas conforme cada nível.
- Impressão no console com `printf()` seguindo o formato:
  - `printf("Direita\n");`
  - `printf("Cima, Direita\n");`
  - `printf("Esquerda\n");`
  - etc.
- Linhas em branco devem separar os movimentos de cada peça.

🚫 Requisitos Não Funcionais
-----------------------------
- Código eficiente, sem atrasos nem estouros de pilha.
- Comentários explicando a lógica de cada função ou loop.
- Código limpo, com indentação adequada, nomes de variáveis claros e uso apenas dos tipos `int` e `string`.

📤 Exemplo de Saída Esperada
-----------------------------
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (While):
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo (Aventureiro):
Baixo
Baixo
Esquerda

Movimento da Torre (Recursiva):
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (Recursiva):
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha (Recursiva):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo (Mestre):
Cima
Cima
Direita

Movimento do Bispo (Loops Aninhados):
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `simulador_xadrez.c`
2. Compile com:
   gcc simulador_xadrez.c -o xadrez
3. Execute:
   ./xadrez

💡 Dicas Finais
---------------
- Comente cada função com clareza, explicando o propósito da recursão ou do loop.
- Prefira dividir o código em funções por peça.
- Valide sua lógica usando o exemplo de saída.
- Não se preocupe com as regras completas do xadrez — o foco aqui é programar os padrões de movimento.

Boa sorte e divirta-se programando como um verdadeiro Mestre do Código! 🧠⚔️