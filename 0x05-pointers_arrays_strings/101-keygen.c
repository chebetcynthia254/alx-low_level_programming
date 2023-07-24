#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates random valid passwords
 * for the program 101-crackme
 * Return: The generated password as a string.
 */
char *generate_password(void)
{
const char valid_chars[] = "abcdefghijklmnopqrstuvYZ0123456789";
const int valid_chars_count = sizeof(valid_chars) - 1;
char *password = (char *)malloc(9 * sizeof(char));
if (password == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(EXIT_FAILURE);
}
for (int i = 0; i < 8; i++)
{
password[i] = valid_chars[rand() % valid_chars_count];
}
password[8] = '\0';
return (password);
}
int main(void)
{
srand(time(NULL));
char *password = generate_password();
printf("Generated password: %s\n", password);
free(password);
return (0);
}
