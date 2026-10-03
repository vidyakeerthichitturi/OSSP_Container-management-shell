#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/shell.h"
#include "../include/input.h"
#include "../include/parser.h"
#include "../include/process.h"
#include "../include/pipes.h"

int main()
{
    char *line;
    char **tokens;

    while (1)
    {
        printf("myshell> ");

        line = read_line();

        if (strcmp(line, "exit") == 0)
        {
            free(line);
            break;
        }

        if (strchr(line, '|') != NULL)
        {
            char *cmd1;
            char *cmd2;
            char *pipe_pos;

            pipe_pos = strchr(line, '|');
            *pipe_pos = '\0';

            cmd1 = line;
            cmd2 = pipe_pos + 1;

            char **tokens1 = parse_line(cmd1);
            char **tokens2 = parse_line(cmd2);

            execute_pipe(tokens1, tokens2);

            free_tokens(tokens1);
            free_tokens(tokens2);
        }
        else
        {
            tokens = parse_line(line);

            execute(tokens);

            free_tokens(tokens);
        }

        free(line);
    }

    printf("Goodbye!\n");

    return 0;
}
