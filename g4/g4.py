import sys

def es_g4(s: str) -> bool:
    return s=="ab" or s=="abb"

def main():
    if len(sys.argv) != 2:
        print("Agregue un archivo")
        return
    nombre_archivo = sys.argv[1]
    try:
        with open(nombre_archivo, "r") as f:
            for linea in f:
                cadena = linea.strip()
                print(f"{'Acepta' if es_g4(cadena) else 'No acepta'}")
    except FileNotFoundError:
        print("Archivo no encontrado.")

if __name__ == "__main__":
    main()