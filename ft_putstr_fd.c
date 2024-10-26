/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:20:23 by larellan          #+#    #+#             */
/*   Updated: 2024/10/26 08:20:25 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_putstr_fd() writes the string s to the file descriptor fd.
 * 
 * param char s The string to be printed.
 * param int fd file descriptor
 * 
 * return the number of characters printed.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
