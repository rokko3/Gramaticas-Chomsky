# Gramaticas-Chomsky

## Introducción
Este repositorio contiene implementaciones en **C** y **Python** para trabajar con **gramáticas formales**, especialmente aquellas definidas dentro de la **jerarquía de Chomsky** (Tipos 0, 1, 2 y 3).


## Cómo funciona

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
