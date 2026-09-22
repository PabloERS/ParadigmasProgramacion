import math

#Problema 1: Presente un programa que, calcule el factorial de un número entero

def factorial(n):

  if n == 0 or n == 1:
    return 1
  else:
    return n * factorial(n - 1)

#Problema 2: Presente un programa que, que invierta un número entero alimentado desde teclado

def invertir(n, invertido=0):
  if n == 0:
    return invertido
  else:
    digito = n % 10
    return invertir(n//10, invertido * 10 + digito)

#Problema 3: Presente un programa que, calcule la potencia n de un número entero

def potencia(n, m):
  if m == 0:
    return 1
  else:
    return n * potencia(n, m - 1)

def main():
    n = int(input("Ingresa un numero entero: "))
    print(f"El factorial es {factorial(n)}")

    n = int(input("Ingresa un numero a invertir: "))
    print(f"El numero invertido es {invertir(n)}")

    n = int(input("Ingresa la base: "))
    m = int(input("Ingresa el exponente: "))
    print(f"El resultado es {potencia(n, m)}")

if __name__ == "__main__":
    main()

