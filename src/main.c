#include <stdio.h>
#include <string.h>

int main()
{
    char input[1024];

    printf("=====================================\n");
    printf("     Container Management Shell\n");
    printf("=====================================\n");

    while (1)
    {
        printf("container-shell> ");

        if (fgets(input, sizeof(input), stdin) == NULL)
            break;

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0)
        {
            printf("Exiting Container Management Shell...\n");
            break;
        }

        printf("You entered: %s\n", input);
    }

    return 0;
}

