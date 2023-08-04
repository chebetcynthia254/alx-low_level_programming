#include <stdio.h>
#include <stdlib.h>
/**
 *main -  print the number of coin to make
 * a change for an amount
 * @argc: number of command line arg
 * @argv: array that holds the command line arg..
 * Return: (0) when successful
*/
int main(int argc, char *argv[])
{
int cents, coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins = 0;
coins += cents / 25;
cents %= 25;
coins += cents / 10;
cents %= 10;
coins += cents / 5;
cents %= 5;
coins += cents;
printf("%d\n", coins);
return (0);
}
