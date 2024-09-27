#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (scr[i] && dest_lenght + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_lenght >= size)
		dest_lenght = size;
	return (dest_length + src_length);
}
