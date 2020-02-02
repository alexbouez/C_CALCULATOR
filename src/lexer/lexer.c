#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "tokens.h"
#include "lexer.h"

bool lexer(char *input) { 
    input = replace_char(input, '\n', ';');
    printf("[IN] lexer with string '%s'\n", input);

    char current = '\0';
    char next;
    char index = 0;

    enum tokens *result = malloc(sizeof(enum tokens *));

    do {
       printf("lexering\n"); 
    } while (current != '\0');

    return false;
}

char *replace_char(char* str, char find, char replace){
    char *current_pos = strchr(str,find);
    while (current_pos){
        *current_pos = replace;
        current_pos = strchr(current_pos,find);
    }
    return str;
}
