#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

#include "lexer/tokens.h"
#include "lexer/lexer.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char *argv[])
{
	printf("\nWelcome to the C-Calculator!\n");

    char *input;
    char *line;
    bool no_exit = true;
    while (no_exit) {
        printf("\nType 'help' for user manual, 'exit' to close the process.\n>> Enter expression : ");
        fgets(input, sizeof(char *), stdin);

        test();

        char *exit = "exit\n";
        if (!strcmp(input, exit)) no_exit = false;
    }

    printf("\nStandard process exit.\n");
	return EXIT_SUCCESS;
}
