♟️ Desafio: Movimentando as Peças do Xadrez
===========================================

Níveis: Novato e Aventureiro
Linguagem: C
Conceito-chave: Estruturas de repetição (for, while, do-while, loops aninhados)

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo](#🎯-objetivo)
- [📌 O que você vai fazer](#📌-o-que-você-vai-fazer)
- [✅ Requisitos Funcionais](#✅-requisitos-funcionais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [🎯 Simplificações](#🎯-simplificações)
- [📤 Exemplo de Saída Esperada](#📤-exemplo-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dica Final](#💡-dica-final)

🎯 Objetivo
-----------
Simular, por meio de estruturas de repetição em C, o movimento de peças do xadrez: Torre, Bispo, Rainha e Cavalo.
O foco é aplicar as estruturas for, while, do-while e loops aninhados.

📌 O que você vai fazer
------------------------

1. **Torre**
   - Move-se em linha reta (horizontal ou vertical).
   - ➤ Simular 5 casas para a direita usando `for`.

2. **Bispo**
   - Move-se na diagonal.
   - ➤ Simular 5 casas para cima e à direita usando `while`.
   - ➤ Exemplo de saída: "Cima, Direita"

3. **Rainha**
   - Move-se em todas as direções.
   - ➤ Simular 8 casas para a esquerda usando `do-while`.

4. **Cavalo** (nível aventureiro)
   - Move-se em "L": duas casas em uma direção e uma casa perpendicular.
   - ➤ Simular movimento de 2 casas para baixo e 1 casa para a esquerda.
   - ➤ Utilizar **loops aninhados**: um `for` e outro `while` ou `do-while`.

✅ Requisitos Funcionais
-------------------------
- Valores de movimento devem ser definidos como variáveis ou constantes no código.
- Cada peça deve usar uma estrutura diferente:
    • Torre → `for`
    • Bispo → `while`
    • Rainha → `do-while`
    • Cavalo → loops aninhados (`for` + `while` ou `do-while`)
- Imprimir a direção de cada movimento com `printf`.
- Separar o movimento do Cavalo com uma linha em branco.

🚫 Requisitos Não Funcionais
-----------------------------
- Código deve executar de forma eficiente.
- Comentários explicativos em todas as seções do código.
- Código legível: nomes descritivos, boa indentação, tipos `int` e `string` apenas.

🎯 Simplificações
------------------
- Não é necessário validar entrada do usuário.
- Não é necessário simular o jogo completo.
- O Cavalo pode partir de uma posição fixa definida por você.

📤 Exemplo de Saída Esperada
-----------------------------
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
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

Movimento do Cavalo:
Baixo
Baixo
Esquerda

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `movimentacao_xadrez.c`
2. Compile com:
   gcc movimentacao_xadrez.c -o xadrez
3. Execute:
   ./xadrez

💡 Dica Final
-------------
Organize seu código com funções separadas, uma para cada peça. Isso melhora a legibilidade e facilita a manutenção.
Use comentários para explicar a lógica de cada estrutura de repetição e o uso de loops aninhados no movimento do Cavalo.

Bons estudos e boa prática! 🚀