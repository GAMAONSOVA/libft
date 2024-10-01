#include <string.h>
#include <stdio.h>

#include "libft/libft.h"

int main()
{
    size_t a = ft_strlen("1234");
    size_t b = strlen("1234");
    printf("ft_strlen: %lu\n", a);
    printf("strlen: %lu\n", b);
    
    return 0;
}