#include <string.h>

size_t
ft_strlcat(char *dst, const char *src, size_t size)
{
    
    size_t src_len =  strlen(src);
    size_t dst_len =  strlen(dst);
    
    if (dst_len >= size)
    	dst_len = size;
    
    if (dst_len == size)
    	return (size + src_len);
    
    if (src_len < size - dst_len)
	memcpy(dst + dst_len, src, src_len + 1);
    
    else
    {
    	memcpy(dst + dst_len, src, size - dst_len - 1);
    
    	dst[size - 1] = '\0';
    }
    return (dst_len + src_len);
}
