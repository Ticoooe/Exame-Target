#include <stdio.h>
#include <math.h>

int QuadradoPerfeito(int x) {
    int s = sqrt(x);
    return s*s == x;
}

int Fibonacci(int n) {
    return QuadradoPerfeito(5*n*n + 4) || QuadradoPerfeito(5*n*n - 4);
}

int main() {
    int num;
    int i = 0;
    int fib1 = 0;
    int fib2 = 1; 
    int prox;

    printf("Digite um número:");
    scanf("%d", &num);

    printf("Sequência de Fibonacci até %d: \n", num);
    
    while (fib1 <= num) {
        printf("%d, ", fib1);
        prox = fib1 + fib2;
        fib1 = fib2;
        fib2 = prox;
    }

    if (Fibonacci(num)){
        printf("\n%d é um número de Fibonacci.\n", num);
    }
    else
        printf("\n%d não é um número de Fibonacci.\n", num);

    return 0;
}