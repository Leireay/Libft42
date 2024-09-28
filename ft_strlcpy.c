#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len; //crea una variable para guardar la longitud del string

	len = ft_strlen(src) //guardo la variable len y la longitud de mi string original
	if (dstsize < 1) //si el tamaño del buffer es menor que 1
		return (len);//devuelvo la longitud de origen
	i = 0;
	while ()
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
