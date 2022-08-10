#include <stdio.h>
#include <unistd.h>

/**
*main -pid
*return -always 0
*/

int main(void)
{
pid_t my_unique_pid;

my_unique_pid = getpid();
printf("My new PID: %u\n", my_unique_pid);

my_unique_pid = getppid();
printf("My PARENT PID: %u\n", my_unique_pid);

return (0);
}
