♟️ Desafio: Movimentando as Peças do Xadrez
===========================================

Nível: Novato
Linguagem: C
Conceito-chave: Estruturas de repetição (for, while, do-while)

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo](#🎯-objetivo)
- [📌 O que você vai fazer](#📌-o-que-você-vai-fazer)
- [✅ Requisitos Funcionais](#✅-requisitos-funcionais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [🎯 Simplificações para o Nível Básico](#🎯-simplificações-para-o-nível-básico)
- [📤 Exemplo de Saída Esperada](#📤-exemplo-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dica Final](#💡-dica-final)

🎯 Objetivo
-----------
Simular, por meio de estruturas de repetição em C, o movimento de três peças do xadrez: Torre, Bispo e Rainha.
O foco é aplicar os laços for, while e do-while de forma prática e didática.

📌 O que você vai fazer
------------------------
Crie um único programa em C que simule os seguintes movimentos:

- Torre:
  Move-se em linha reta (horizontal ou vertical).
  ➤ Simular movimento 5 casas para a direita usando a estrutura for.

- Bispo:
  Move-se em diagonal.
  ➤ Simular movimento 5 casas para cima e à direita usando a estrutura while.
  ➤ Exemplo de saída: "Cima, Direita"

- Rainha:
  Move-se em todas as direções.
  ➤ Simular movimento 8 casas para a esquerda usando a estrutura do-while.

✅ Requisitos Funcionais
-------------------------
- Os valores (número de casas) devem ser definidos diretamente no código com variáveis inteiras.
- Cada peça deve usar uma estrutura de repetição diferente para simular sua movimentação:
    • for → Torre
    • while → Bispo
    • do-while → Rainha
- O programa deve imprimir a direção do movimento a cada casa percorrida:
    • printf("Direita\n");
    • printf("Cima, Direita\n");
    • printf("Esquerda\n");

🚫 Requisitos Não Funcionais
-----------------------------
- Código deve executar de forma rápida, sem atrasos visíveis.
- Utilize comentários explicativos para cada trecho relevante.
- Nomes de variáveis devem ser descritivos.
- Código bem identado, com clareza e uso apenas de tipos int e strings.

🎯 Simplificações para o Nível Básico
-------------------------------------
- Não é necessário validar entrada do usuário.
- Não é necessário simular o jogo completo de xadrez.
- Foque apenas no movimento individual de cada peça.

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

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `movimentacao_xadrez.c`
2. Compile com:
   gcc movimentacao_xadrez.c -o xadrez
3. Execute:
   ./xadrez

💡 Dica Final
-------------
Use printf() para exibir cada passo de forma clara. Se desejar, separe cada lógica de peça em uma função diferente para tornar o código mais modular e organizado.

Bons estudos e boa sorte! 🚀