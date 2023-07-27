#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This is the main function that serves as the entry point of the program.
 * It prints the value of a[2] after updating it to 98.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/* Your line of code goes here */
*(p + 5) = 98;

/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
