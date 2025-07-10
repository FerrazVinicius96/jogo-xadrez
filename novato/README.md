# ♟️ Movimento de Peças no Xadrez – Torre, Bispo e Rainha

Este programa em linguagem C demonstra o uso de **estruturas de repetição** para simular movimentos básicos de três peças do xadrez: **Torre**, **Bispo** e **Rainha**. Cada peça é representada por uma quantidade de movimentos definidos em variáveis, e cada tipo de laço (`for`, `while` e `do-while`) é utilizado para demonstrar sua execução.

---

## 📌 Objetivos Didáticos

- Praticar **estruturas de repetição** em C: `for`, `while`, `do-while`.
- Representar de forma simbólica os movimentos das peças no tabuleiro.
- Explorar diferenças de execução entre os laços.

---

## 🧠 Conceitos Utilizados

| Peça   | Estrutura de repetição | Comportamento da estrutura                    |
|--------|------------------------|-----------------------------------------------|
| Torre  | `for`                  | Inicializa antes do laço e atualiza no final |
| Bispo  | `while`                | Verifica a condição antes de executar        |
| Rainha | `do-while`             | Executa primeiro, verifica depois            |

---

## ▶️ Execução esperada

Ao executar o programa, a saída será:

Torre -> Direita
Torre -> Direita
Torre -> Direita
Torre -> Direita
Torre -> Direita
Bispo -> Cima, Direita
Bispo -> Cima, Direita
Bispo -> Cima, Direita
Bispo -> Cima, Direita
Bispo -> Cima, Direita
Rainha -> Esquerda
Rainha -> Esquerda
Rainha -> Esquerda
Rainha -> Esquerda
Rainha -> Esquerda
Rainha -> Esquerda
Rainha -> Esquerda
Rainha -> Esquerda

---

## 🛠️ Compilação e Execução

```bash
gcc main.c -o xadrez
./xadrez