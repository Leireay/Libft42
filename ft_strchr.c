#include <libft.h>

char        *ft_strchr(const char *s, int c)
{
        while (*s) //mientras el puntero en la cadena exista
        {
                if (*s == c) //mientras el puntero busca caracter en la cadena que sea igual
                {
                        return ((char *) s);
                }
                s++;
        }
        if (c == '\0')
          return ((char *) s);
        return (0);
}
int     main (void)
{
        printf("%s", ft_strchr("Hola que tal", 'q'));
}
