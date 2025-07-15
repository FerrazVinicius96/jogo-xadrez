♟️ Desafio: Criando Movimentos Complexos (Nível Mestre)
========================================================

Nível: Mestre
Linguagem: C
Conceitos-chave: Recursividade, loops aninhados, controle de fluxo

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
Aprimorar o programa de movimentação de peças de xadrez em C utilizando técnicas avançadas como **recursividade**, **loops aninhados** e **controle de fluxo com múltiplas variáveis e condições**.

📌 O que você vai fazer
------------------------

1. **Torre, Bispo e Rainha com Recursividade**
   - Substituir os loops que controlavam os movimentos dessas peças por funções recursivas.
   - Cada chamada recursiva representa uma casa movida, com `printf` para indicar a direção.

2. **Cavalo com Loops Complexos**
   - Movimentar o Cavalo em "L" (duas casas para cima e uma para a direita).
   - Utilizar loops aninhados com múltiplas variáveis e/ou condições.
   - Usar `continue` e `break` quando necessário para controle preciso do fluxo.

3. **Bispo com Loops Aninhados**
   - Além da recursividade, implementar também uma variação com loops aninhados:
     - Loop externo: vertical (cima)
     - Loop interno: horizontal (direita)

✅ Requisitos Funcionais
-------------------------
- Defina os valores de casas e condições diretamente no código com variáveis ou constantes.
- Implementar recursividade para Torre, Bispo e Rainha.
- Implementar movimentação complexa do Cavalo com loops aninhados e controle de fluxo.
- Bispo deve também possuir uma versão usando loops aninhados.
- Cada etapa do movimento deve imprimir a direção no formato:
    • printf("Cima\n");
    • printf("Direita\n");
    • printf("Esquerda\n");
    • etc.
- Use linhas em branco para separar a saída de cada peça.

🚫 Requisitos Não Funcionais
-----------------------------
- Código eficiente e sem atrasos perceptíveis.
- Evitar profundidade de recursão excessiva (cuidado com stack overflow).
- Comentários claros explicando:
    • Como a recursividade está estruturada.
    • Como os loops são utilizados e controlados.
- Código bem formatado com nomes de variáveis descritivos.
- Utilizar apenas tipos `int` e `string`.

🎯 Simplificações
------------------
- Não é necessário validar entrada do usuário.
- Não é necessário implementar regras completas do xadrez.
- Foque apenas nos movimentos específicos de cada peça conforme descrito.

📤 Exemplo de Saída Esperada
-----------------------------
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (Recursivo):
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
1. Salve o código como `xadrez_mestre.c`
2. Compile com:
   gcc xadrez_mestre.c -o xadrez
3. Execute:
   ./xadrez

💡 Dica Final
-------------
Este desafio é ideal para treinar raciocínio lógico, recursividade e controle fino de estruturas de repetição.
Documente cada função com clareza e organize seu código modularmente para facilitar a leitura e manutenção.

Avance com estratégia e precisão. Boa sorte, Mestre do Código! 🧠⚔️
