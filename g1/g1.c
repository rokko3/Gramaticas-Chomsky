#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool es_capicua(const char *s) {
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return strlen(s) > 0; 
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Ingrese un documento\n");
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (!archivo) {
        perror("Error al abrir el archivo");
        return 1;
    }

    char linea[256];
    while (fgets(linea, sizeof(linea), archivo)) {
        linea[strcspn(linea, "\n")] = 0;

        if (es_capicua(linea)) {
            printf("Acepta\n");
        } else {
            printf("No acepta\n");
        }
    }

    fclose(archivo);
    return 0;
}
