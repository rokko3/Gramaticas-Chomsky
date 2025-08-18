#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool es_valida(const char *s) {
    int len = strlen(s);
    
    if (len < 2) return false; 
    if (s[0] != 'a' || s[len - 1] != 'b') return false; 


    for (int i = 1; i < len - 1; i += 2) {
        if (s[i] != 'a' || (i + 1 < len - 1 && s[i + 1] != 'b')) {
            return false;
        }
    }

    
    if ((len - 2) % 2 != 0) return false;

    return true;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <archivo.txt>\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (!archivo) {
        perror("Error al abrir el archivo");
        return 1;
    }

    char linea[256];
    while (fgets(linea, sizeof(linea), archivo)) {
        linea[strcspn(linea, "\n")] = '\0';
        if (es_valida(linea)) {
            printf("Acepta: %s\n", linea);
        } else {
            printf("No acepta: %s\n", linea);
        }
    }

    fclose(archivo);
    return 0;
}
