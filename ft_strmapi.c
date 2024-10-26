/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:18:34 by larellan          #+#    #+#             */
/*   Updated: 2024/10/26 08:18:39 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_strmapi() applies the function f to each character of the string passed 
 * as argument by giving its index as first argument to create a “fresh” 
 * new string (with malloc(3)) resulting from the * successive applications of f.
 * 
 * param char s The string to be mapped.
 * param char f a function that takes an unsigned int and a char as parameters 
 * and returns a char.
 * 
 * return A pointer to a new string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
