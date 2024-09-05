#include <string.h> 

size_t
ft_strlcpy (char *dst, const char *src, size_t size)
{
    size_t i = 0;
    
    while(i != size)
    {
        dst[i] = src[i];
        i++;
        
        if(i == size - 1)
            dst[i] = '\0';
    }
    return i;
}
