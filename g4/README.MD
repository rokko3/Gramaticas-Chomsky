# Resumen del Código

Este código en Python valida cadenas de texto segun el lenguaje \$ L(G_5) = \{ a(ab)^n b \mid n \geq 0 \} \$. A continuación se describen las principales características y funcionalidades del código:

## Funciones Principales

### `es_valida(s: str) -> bool`
- **Descripción**: Verifica si la cadena `s` pertenece al lenguaje especificado.
- **Condiciones de Validación**:
  1. La longitud de la cadena debe ser al menos 2.
  2. La cadena debe comenzar con 'a' y terminar con 'b'.
  3. Entre la 'a' inicial y la 'b' final, debe haber un número par de caracteres que consisten en el patrón "ab".
- **Retorno**: Devuelve `True` si la cadena es válida, de lo contrario, devuelve `False`.


## Ejecución
input:
![alt text](image.png)

Output:

![alt text](image-1.png)