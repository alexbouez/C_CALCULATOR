#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "lexer/tokens.h"
#include "lexer/lexer.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char *argv[])
{
	printf("Welcome to the C-Calculator!\n");

    //Allocating variables
    char *input = malloc(sizeof(char *));
    bool exit = false;
    
    while (!exit) {
        printf("\nType 'help' for user manual, 'exit' to close the process.\n>> Enter expression : ");
        fgets(input, sizeof(input), stdin);

        exit = lexer(input);
    }

    //Freeing variables
    free(input);
    
    printf("\nStandard process exit.\n");
	return EXIT_SUCCESS;
}
