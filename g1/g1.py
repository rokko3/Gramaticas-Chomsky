def es_capicua(cadena: str) -> bool:
    return cadena == cadena[::-1] and len(cadena) > 0

def main():
    import sys

    if len(sys.argv) != 2:
        print("Ingrese un documento")
        sys.exit(1)

    try:
        with open(sys.argv[1], "r") as archivo:
            for linea in archivo:
                cadena = linea.strip()
                if es_capicua(cadena):
                    print("Acepta")
                else:
                    print("No acepta")
    except FileNotFoundError:
        print("Error: no se pudo abrir el archivo.")

if __name__ == "__main__":
    main()
