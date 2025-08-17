import sys

def es_valida(s: str) -> bool:
    if len(s) < 2:  # Longitud mínima es 2 ("ab")
        return False
    
    if not s.startswith('a') or not s.endswith('b'):
        return False

    # Verificar el patrón "ab" repetido
    for i in range(1, len(s) - 1, 2):
        if i + 1 >= len(s) or s[i] != 'a' or s[i + 1] != 'b':
            return False

    return True

def main():
    if len(sys.argv) != 2:
        print("ingrese un archivo")
        return
    
    nombre_archivo = sys.argv[1]
    
    try:
        with open(nombre_archivo, 'r') as f:
            for linea in f:
                cadena = linea.strip()
                resultado = "Acepta" if es_valida(cadena) else "No acepta"
                print(f"{resultado}: {cadena}")
    except FileNotFoundError:
        print(f"Error: Archivo '{nombre_archivo}' no encontrado")
    except Exception as e:
        print(f"Error: {str(e)}")

if __name__ == "__main__":
    main()
