#include <stddef.h>

void *
ft_memset(void *str, int c, size_t n)
{
        size_t i=0;
        char *s = (char *) str;

        while(i != n)
        {
                s[i] = c;
                i++;
        }
        return str;
}
