#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* print out an error message and exit */
void my_error(char *s)
{
    perror(s);
    exit(1);
}

/* Concatnate two strings.
 * Dynamically allocate space for the result.
 * Return the address of the result.
 */
char *my_strcat(char *s1, char *s2)
{
 char *result = malloc(strlen(s1) + strlen(s2) + 1);
 if (result == NULL){
     my_error("malloc");
 }
 strcpy(result, s1);
 strcat(result, s2);
 return result;
 free(s1);
}

int main(int argc, char *argv[])
{
    char *s;

    s = my_strcat("", argv[0]);

    for (int i = 1; i < argc; i ++) {
        s = my_strcat(s, argv[i]);
    }

    printf("%s\n", s);

    return 0;
}
