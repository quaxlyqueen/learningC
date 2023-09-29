#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

char cwd[PATH_MAX];
char *cmd;
size_t len = 32;

int main() {
    char *token, *cmdtok;
    char *args[256];

    printf("Welcome to Josh's Shell!\n");

    do {
        getcwd(cwd, sizeof(cwd));
        printf("%s -> ", cwd);

        getline(&cmd, &len, stdin);
        token = strtok(cmd, " \n");
        cmdtok = token;

        int i = 0;
        while (token != NULL) {
            args[i++] = token;
            token = strtok(NULL, " \n");
        }
        args[i] = NULL;
    } while (strcmp(cmdtok, "exit") != 0);
    return 0;
}
