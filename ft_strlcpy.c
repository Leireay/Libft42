#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len; //crea una variable para guardar la longitud del string

	len = ft_strlen(src) //guardo la variable len y la longitud de mi string original
	if (dstsize < 1) //si el tamaño del buffer es menor que 1
		return (len);//devuelvo la longitud de origen
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))//mientras mi origen en la posicion i sea distinto a caracter nulo.Y mi contador sea menor que mi buffer menos 1 PARA CHAR NULO.
	{
		dst[i] = src[i];//copio mi origen en el destino
		i++;//Voy avanzando para recorer el src
	}
		dst[i] = '\0';//por ultimo cierro con caracter nulo mi destino
	return (len);//devuelvo la longitud total de la cadena a crear (longitud de src)
}
