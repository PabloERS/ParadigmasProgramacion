

import math

def volumen():
  #Problema 1: Presente un programa que,
  #calcule el volumen de un cilindro: donde r es su radio del cilindro y L su longitud.
  #Utiliza la siguiente formula: V = Pi r^2 L.
  r = float(input("Dame el radio del cilindro: "))
  l = float(input("Dame la longitud del cilindro: "))
  vol = lambda r,l: math.pi * pow(r,2) * l
  print(f"El volumen del cilindro es: {vol(r,l):.2f}")

def superficie():
  #Problema 2: Presente un programa que,
  #calcule la superficie de un cilindro: donde r es su radio del cilindro y L su longitud.
  #Utiliza la siguiente formula: S = 2 Pi r L + 2 Pi r^2.
  r = float(input("Dame el radio del cilindro: "))
  l = float(input("Dame la longitud del cilindro: "))
  sup = lambda r,l: (2 * math.pi * r * l) + (2 * math.pi * pow(r,2))
  print(f"La superficie del cilindro es: {sup(r,l):.2f}")

def chicharronera():
  #Problema 3: Presente un programa que,
  #calcule las raices de x del siguiente polinomio;
  #ax2 + bx + c, donde a, b, c son números conocidos.
  a = float(input("Dame el coeficiente a: "))
  b = float(input("Dame el coeficiente b: "))
  c = float(input("Dame el coeficiente c: "))
  chachich = lambda a,b,c: (-b + math.sqrt(pow(b,2) - (4 * a * c))) / (2 * a)
  chachich2 = lambda a,b,c: (-b - math.sqrt(pow(b,2) - (4 * a * c))) / (2 * a)
  print(f"La primera raiz es: {chachich(a,b,c):.2f}")
  print(f"La segunda raiz es: {chachich2(a,b,c):.2f}")
