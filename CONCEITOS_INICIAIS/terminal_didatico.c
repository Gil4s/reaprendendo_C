#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char comando[50];

    printf("=====================================\n");
    printf("      MINI TERMINAL EDUCACIONAL\n");
    printf("=====================================\n\n");
    printf("Comandos disponíveis:\n");
    printf("  ls        -> Lista os arquivos (equivale a 'dir' no Windows)\n");
    printf("  cd        -> Muda de diretório\n");
    printf("  mkdir     -> Cria uma nova pasta\n");
    printf("  rm        -> Remove um arquivo\n");
    printf("  rmdir     -> Remove uma pasta\n");
    printf("  touch     -> Cria um novo arquivo\n");
    printf("  exit      -> Sai do programa\n\n");

    while (1) {
        printf(">> ");
        scanf("%s", comando);

        if (strcmp(comando, "ls") == 0) {
            printf("Comando 'ls': lista os arquivos e pastas no diretório atual.\n");
            printf("No Windows, o equivalente seria 'dir'.\n\n");
        } 
        else if (strcmp(comando, "cd") == 0) {
            printf("Comando 'cd <pasta>': muda o diretório atual.\n");
            printf("Exemplo: cd Documentos\n\n");
        } 
        else if (strcmp(comando, "mkdir") == 0) {
            printf("Comando 'mkdir <nome_pasta>': cria uma nova pasta.\n");
            printf("Exemplo: mkdir Projetos\n\n");
        } 
        else if (strcmp(comando, "rm") == 0) {
            printf("Comando 'rm <arquivo>': remove um arquivo específico.\n");
            printf("No Windows, o equivalente é 'del <arquivo>'.\n\n");
        } 
        else if (strcmp(comando, "rmdir") == 0) {
            printf("Comando 'rmdir <pasta>': remove uma pasta vazia.\n");
            printf("No Windows, o equivalente também é 'rmdir <pasta>'.\n\n");
        } 
        else if (strcmp(comando, "touch") == 0) {
            printf("Comando 'touch <arquivo>': cria um novo arquivo vazio.\n");
            printf("No Windows PowerShell, o equivalente é 'New-Item <arquivo>'.\n\n");
        } 
        else if (strcmp(comando, "exit") == 0) {
            printf("Encerrando o mini terminal... até a próxima!\n");
            break;
        } 
        else {
            printf("Comando não reconhecido. Tente novamente.\n\n");
        }
    }

    return 0;
}
