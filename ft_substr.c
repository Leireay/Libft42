/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:18:12 by larellan          #+#    #+#             */
/*   Updated: 2024/10/26 08:18:16 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * "ft_substr() returns a pointer to a new string which is a substring of the 
 * string pointed to by s, starting at index start and of length len."
 * 
 * The first thing we do is check if s is NULL. If it is, we return NULL
 * 
 * param char s The string to be cut.
 * param unsigned int start the index of the first character to include in the 
 * substring.
 * param size_t len the length of the substring
 * 
 * return A pointer to a new string.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
