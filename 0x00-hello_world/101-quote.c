#include <unistd.h>
#include <string.h>
#include <errno.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
CStr  message = "and that piece of art is useful\" -*Dora Korpar, 2015-10-19\n";
ssize_t bytes_written = write(STDERR_FILENO, message, strlen(message));
if (bytes_written == -1)
{
write(STDERR_FILENO, ERR_MSG, sizeof(ERR_MSG) - 1);
return (1);
}
return (1);
}

