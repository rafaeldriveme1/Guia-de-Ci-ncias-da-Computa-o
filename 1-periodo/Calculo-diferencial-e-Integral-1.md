# Cálculo diferencial e Integral 1

A disciplina de Cálculo Diferencial e Integral 1 tem como 
objetivo inicializar e familiarizar os alunos aos conceitos 
matemáticos do cálculo. Inicialmente a disciplina trabalha 
com noções simples, no entanto importantes, 
de variáveis e os diferentes tipos de funções

#### Sumario

[00. Noção Intuitiva de Limites](#user-content-noção-intuitiva-de-limites)
[01. Definição formal de Limites](#user-content-definição-formal-de-limites)
[02. Propriedade dos Limites](#user-content-propriedade-dos-limites)

## Noção Intuitiva de Limites

Notamos que à medida que x se aproxima de 1, y se aproxima de 3, ou seja, quando x tende para 1 (x 1), y tende para 3 (y 3), ou seja: ... Se f(x) tende para 3 (f(x) 3), dizemos que o limite de f(x) quando x 1 é 3, embora possam ocorrer casos em que para x = 1 o valor de f(x) não seja 3.

#### Tendendo ao infinito

A sequência 1, 2, 3, 4, 5... está crescendo no limite do infinito, portanto é representado por:

X -> +& (x tendendo a + infinito)

#### Tendendo a 1

A sequência 1/2, 2/3, 3/4, 4/5, 5/6... que também é representando por 0.5, 0.666, 0.75, 0.8... está crescendo no limite do 1, portanto é representado por:

X -> +1 (x tendendo a 1)

#### Tendendo ao - infinito

A sequência 1, 0, -1, -2, -3, -4... está retrocedendo no limite do - infinito, portanto é representado por:

X -> -& (x tendendo a - infinito)

#### Sem limite

A sequência 1, 1/2, 2, 2/3, 3, 3/4... está tendendo parte dela no limite do + infinito, e a
outra parte para o limite de 1, portanto não tem limite.

## Funções

Nessa função o X tende para o +infinito, portanto qual o limite de Y?

#### Fórmula

```
y = 1/x
```

#### Exemplo 1

```
x = 1 -> y = 1 / 1 = 1
```

```
x = 2 -> y = 1 / 2 = 0.5
```

```
x = 10 -> y = 1 / 10 = 0.1
```

```
x = 100 -> y = 1 / 100 = 0.01
```

Percebemos que quanto mais X tende para +&, Y tende para 0

```
lim x -> & | 1 / x = 0
```

#### Exemplo 2

```
x = 1 -> y = 1 / -1 = -1
```

```
x = 2 -> y = 1 / -2 = -0.5
```

```
x = 10 -> y = 1 / -10 = -0.1
```

```
x = 100 -> y = 1 / -100 = -0.01
```

Percebemos que quanto mais X tende para -&, Y tende para 0

```
lim x -> -& | 1 / x = 0
```

#### Gráfico

![Noção Intuitiva de Limites - Cálculo 1](/1-periodo/images/Nocao-Intuitiva-de-Limites-Calculo-1.png)

## Função do 2º Grau (Parábola)

Nessa função o f(X) tende para o +infinito, qual o valor quando ele tende:

#### lim x -> +& | f(x) = ?

```
x^2 - 3x + 2
```

Soma=3 (valor do meio com sinal trocado)

Produto=2 (produto final)

As raízes são 3 e 2

Resposta: +&

#### lim x -> -& | f(x) = ?

Resposta: +&

#### lim x -> 1 | f(x) = ?

Resposta: 0

#### Fórmula

```
f(x)= x^2 - 3x + 2

Obs: O f(x) também pode ser considerado o Y do gráfico
```

#### Gráfico

![Noção Intuitiva de Limites - Cálculo 1](/1-periodo/images/Nocao-Intuitiva-de-Limites-Calculo-1--1.png)

## Outros exemplos

#### Fórmula

```
f(x) = 2x + 1 / x - 1
```

#### lim x -> +& | f(x) = ? e lim x -> -& | f(x) = ?

Vamos usar um número aleatório como exemplo.

x = 100

```
y = 2.100 + 1 / 100 - 1
y = 201 / 99
y = ~2
```

x = 1000

```
y = 2001 / 999
y = ~2
```

Resposta: 2

![Noção Intuitiva de Limites - Cálculo 1](/1-periodo/images/Nocao-Intuitiva-de-Limites-Calculo-1--2.png)

## Definição formal de Limites

De fato, a definição formal de limites é um pouco complexa, mas vamos iniciar de uma forma mais fácil. Supondo que, a partir do primeiro gráfico, a função não fosse contínua em 𝑎 e tivesse essa forma:

```
| x - a | < k => x E (a - k, a + k)
```

![Definição formal de Limites](/1-periodo/images/definicao-de-limite-1.png)

Observe novamente o primeiro gráfico, onde a função é contínua em 𝑎. As setas indicam que a medida que 𝑥 se aproxima de 𝑎, pela direita ou pela esquerda,os valores de 𝑓(𝑥) se aproximam de 𝑓(𝑎). Consequentemente, quanto mais próximo 𝑥 estiver de 𝑎, mais próximo 𝑓(𝑥) estará de 𝑓(𝑎). De uma forma intuitiva, podemos dizer que se 𝑓 é contínua em 𝑎, então o limite de 𝑥 tendendo a 𝑎, da função 𝑓(𝑥) é igual a 𝑓(𝑎). Na notação usual, escrevemos:

![Definição formal de Limites](/1-periodo/images/definicao-de-limite-2.png)

Por outro lado, se a função 𝑓 não é contínua em 𝑎, e mesmo assim atribuíssemos um limite 𝐿, tal que:

![Definição formal de Limites](/1-periodo/images/definicao-de-limite-3.png)

Então, 𝐿 é o valor que 𝑓 deveria ter em 𝑎. Veja abaixo uma ilustração para melhor compreensão:

![Definição formal de Limites](/1-periodo/images/definicao-de-limite-4.png)

## Propriedades do Limites

Unicidade dos limites: O limite, se existir, é unico.

#### Exemplo 1

```
lim x -> a | p(x) = p(a) (p(x) = Polinômio)
```

```
a) lim x-> 2 (3x-1) = 3.2-1 = 6-1=5
```

```
b) lim x-> 1 (x^5-3x^2+2) = 1^5 - 3.1^2 + 2 = 1 - 3 + 2 = 0
```

#### Exemplo 2

```
Se lim x -> a f(x) e lim x -> a g(x) Existem E ce IR:
```

![Propriedade dos Limites - Cálculo 1](/1-periodo/images/Propriedade-dos-Limites.png)

## Referências

| Conteúdo  | links | Autor
| ------------- | ------------- |
| PDF  | [Link](https://petemb.ufsc.br/files/2015/03/Apostila-Calculo-I-PROTEGIDA.pdf)  |
| YOUTUBE  | [Link](https://www.youtube.com/playlist?list=PLEfwqyY2ox86LhxKybOY3_IG-7R5herLC)  | Equaciona Com Paulo Pereira |


