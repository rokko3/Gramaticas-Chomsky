#include <stdio.h>
#include <string.h>
#include <stdbool.h>  


int es_g4(const char *s) {
    return strcmp(s, "ab") == 0 || strcmp(s, "abb") == 0;

}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Porfavor agregue un archivo");
        return 1; 
    }

    char *nombre_archivo = argv[1];
    FILE *archivo = fopen(nombre_archivo, "r");

    if (archivo == NULL) {
        perror("Error al abrir el archivo"); 
        return 1; 
    }

    char linea[256]; 

    while (fgets(linea, sizeof(linea), archivo) != NULL) {

        linea[strcspn(linea, "\n")] = 0;  

        if (es_g4(linea)) {
            printf("Acepta\n");
        } else {
            printf("No acepta\n");
        }
    }

    fclose(archivo);
    return 0;
}