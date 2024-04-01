#include <stdio.h>
#include <string.h>

void inverterString(char *palavra) {
    int tamanho = strlen(palavra);
    
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = palavra[i];
        palavra[i] = palavra[tamanho - i - 1];
        palavra[tamanho - i - 1] = temp;
    }
}

int main() {
    char string[80];
    
    printf("Digite sua string: ");
    fgets(string, sizeof(string), stdin);

    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    inverterString(string);
    printf("%s\n", string);

    return 0;
}
