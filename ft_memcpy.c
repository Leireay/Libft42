include <libft.h>
void	*ft_memcpy(void *dst, const void *src, size_t n) //Copie n bytes del área de memoria src al área de memoria dst
{
	unsigned int	i;

	if (src == NULL && dst == NULL) // si origen o destino son nulos
		return (NULL); //retorno null. 
	i = 0;
	while (i < n)// mientra i menor al tamaño de mi buffer
	{
		((char *)dst)[i] = ((const char *)src)[i];  //igual mi destino de i a la src de i
		i++; //aumento i para poder seguir comparando los 2 strings
	}
	return (dst); //retorno dest modificado. 
}
