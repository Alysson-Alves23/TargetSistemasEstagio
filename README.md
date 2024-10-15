# TargetSistemasEstagio




## Questão 01 
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

``` 
#include <iostream>
using namespace std;

bool isFibonacci(int x) {
int a = 0, b = 1;

    while (b < x) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return b == x;
}
int main() {
int fibonacci;
cout << "Digite um numero: ";
cin >> fibonacci;

    cout << (isFibonacci(fibonacci) ? "" : "Nao ") << "faz parte da sequencia de Fibonacci!" << endl;

    return 0;
}
```
## Questão 02
Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
``` 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Digite uma string: ";
    getline(cin, input);

    int count = 0;

    for (char c : input) {
        if (c == 'a' || c == 'A') {
            count++;
        }
    }

    if (count > 0) {
        cout << "A letra 'a' ocorre " << count << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' nao esta presente na string." << endl;
    }

    return 0;
}
```
## Questão 03
Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
``` 
#include<iostream>
using namespace std;
int main() {
    int INDICE = 12, SOMA =0, K = 1;
    while(K<INDICE) {

        K= K+1;
        SOMA = SOMA +  K ;
    }

    cout << SOMA;
}
```
SAIDA: 77

## Questão 04
Descubra a lógica e complete o próximo elemento:
   a) 1, 3, 5, 7, ___
   b) 2, 4, 8, 16, 32, 64, ____
   c) 0, 1, 4, 9, 16, 25, 36, ____
   d) 4, 16, 36, 64, ____
   e) 1, 1, 2, 3, 5, 8, ____
   f) 2,10, 12, 16, 17, 18, 19, ____
````
a) 1, 3, 5, 7, 9 // Sequência de Números Ímpares

b) 2, 4, 8, 16, 32, 64, 128 // Sequência de 2^N

c) 0, 1, 4, 9, 16, 25, 36, 49 // Sequência de números com raizes inteiras

d) 4, 16, 36, 64, 100 //   2^2, 4^2, 6^2, 8^2, 10^2,..., (N+2 )^2

e) 1, 1, 2, 3, 5, 8, 13 // Fibonacci

f) 2,10, 12, 16, 17, 18, 19, 200 // Números que começam com D

````

## Questão 05
Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?  
````
Se todas as lâmpadas iniciarem desligadas, posso ligar o primeiro interruptor esperar
um pooco e desligar, após isso ligo o segundo interruptor e vou para uma das salas, 
se estiver aceso, é o segundo interuptor, se estiverapagado e quente, é o segundo interruptor,
se estiver apagado e frio é o terceiro. Faço a mesma verificação com a segunda
sala, a opção restante será o interruptor ligado última sala.

````
