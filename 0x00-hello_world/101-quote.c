#include <unistd.h>
/**
* main - Entry point of the program
*
* Return: 0 on successful execution
*/
int main(void)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmultichar"
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
#pragma GCC diagnostic pop
return (1);
}
