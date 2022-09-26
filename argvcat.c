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
    int len1 = 0;
    int len2 = 0;
    while (s1[len1] != '\0') {
      len1++;
    }
    while (s2 {len2} != '\0') {
      len2++;
    }
    char *result = malloc(len1 + len2 + 1);
    if (result == NULL){
      my_error ('malloc');
    }
    for (int i = 0; i < len1; i++){
      result[i] = s1[i];
    }
    for (int i = 0; i < len2; i++){
      result[len1 + i] = s2[i];
    }
    result[len1 +len2] = '\0';
    free(s1);
    return result;
  
    
}

int main(int argc, char *argv[])
{
    char    *s;

    s = my_strcat("", argv[0]);

    for (int i = 1; i < argc; i ++) {
        s = my_strcat(s, argv[i]);
    }

    printf("%s\n", s);

    return 0;
}
