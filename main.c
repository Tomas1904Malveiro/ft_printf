#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
   
    printf(" result: %d\n", print_char('a'));
    printf(" result: %d\n", print_string("hello"));
    printf(" result: %d\n", print_string(NULL));
}