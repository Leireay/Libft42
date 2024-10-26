/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:19:15 by larellan          #+#    #+#             */
/*   Updated: 2024/10/26 08:19:18 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Apply the function f to each character of the string passed as argument, 
 * and passing its index as
 * first argument.
 * 
 * param char s The string to iterate through
 * param void f a function that takes two parameters: an unsigned int 
 * and a char*
 * 
 * return nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
