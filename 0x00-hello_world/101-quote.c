#include<unistd.h>
#include<stdio.h>
/**
 * main - main block
 * Return:1
 */
int main(void)
{
char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, qu, 59);
return (1);
}
