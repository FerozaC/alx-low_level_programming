#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
char ten_lower;
int i;
i = 0;
while (i < 10)
{
ten_lower = 'a';
while (ten_lower <= 'z')
{
_putchar(ten_lower);
ten_lower++;
}
_putchar('\n');
i++;
}
}
