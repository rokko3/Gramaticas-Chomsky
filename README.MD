# Gramaticas-Chomsky

## Introducción
Este repositorio contiene implementaciones en **C** y **Python** para trabajar con **gramáticas formales**, especialmente aquellas definidas dentro de la **jerarquía de Chomsky** (Tipos 0, 1, 2 y 3).

## Entendimiento de las Gramaticas Chomsky
El lenguaje generado o las gramaticas propuestas por chomsky consta en describir la estructura subyacente del lenguaje humano y cómo los hablantes pueden generar y comprender un numero infinito de oraciones.
# Gramáticas Regulares (Tipo 3)
Son las mas simples. Describen patrones repetitivos, como encontrar todas las cadenas que empiezan con "a" y terminan con "z". No son suficientes para capturar la complejidad del lenguaje natural.
#Gramáticas Contextuales (Tipo 2)
Permiten la dependencia de una palabra del contexto en el que aparece. Pueden describir patrones más complejos que las gramáticas regulares, pero aún tienen limitaciones.
#Gramáticas Sensibles al Contexto (Tipo 1)
Son aún más potentes, permitiendo que la estructura de una palabra dependa de las palabras que la rodean. Son complejas y difíciles de analizar.
#Gramáticas Generativas (Tipo 0)
Son las más generales y poderosas. Son las que Chomsky consideraba necesarias para explicar la capacidad infinita del lenguaje humano. Estas gramáticas no solo describen patrones, sino que generan todas las oraciones gramaticales posibles de un idioma.
---
# Estructura del desarrollo de ejemplos con python y C

1. **Entrada de datos**
   - El programa recibe como argumento la ruta a un archivo de texto.
   - Cada línea del archivo representa una cadena a evaluar.

2. **Proceso de verificación**
   - Cuenta cuántos caracteres iniciales son `a` o `0` → esto es `n`.
   - Revisa que el resto de la cadena solo contenga `b` o `1`.
   - Comprueba que la cantidad de `b` o `1` sea exactamente `n+1`.

3. **Salida**
   - Si la cadena cumple las reglas de la gramática: imprime `Acepta`.
   - Si no: imprime `No acepta`.

---
