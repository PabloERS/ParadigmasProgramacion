
#include <stdio.h>

// Problema 1: Presente un programa que calcule el factorial de un número entero

int factorial(int n) {
    if(n==0 || n==1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

// Problema 2: Presente un programa que, que invierta un número entero alimentado desde teclado

int invertir(int n, int invertido){
    if(n==0){
        return invertido;
    }else{
        int digito = n % 10;
        return invertir(n/10, invertido * 10 + digito);
    };
}

// Problema 3: Presente un programa que, calcule la potencia n de un número entero

int potencia(int n, int m){
    if(m==0){
        return 1;
    }else{
        return n * potencia(n, m - 1);
    }
}

int main(){
    int n, m, invertido = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("El factorial es %d\n\n", factorial(n));

    printf("Ingrese un numero a invertir: ");
    scanf("%d", &n);
    printf("El numero invertido es %d\n\n", invertir(n, invertido));

    printf("Ingrese la base y el exponente: ");
    scanf("%d %d", &n, &m);
    printf("El resultado de la potencia es %d\n\n", potencia(n, m));
    return 0;
}
