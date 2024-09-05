#include <stddef.h>

void *
ft_memcpy(void * destptr, const void *srcptr, size_t num )
{
        size_t i = 0;
        char *d = destptr;
        char *s = (char *)srcptr;

        while( i != num)
        {
                d[i] = s[i];
                i++;
        }
        return d;
}
