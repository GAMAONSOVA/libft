 #include <ctype.h>

int 
ft_isalnum(int c)
{
  return isalpha(c) || isdigit(c);
}
