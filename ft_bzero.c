/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:21:54 by larellan          #+#    #+#             */
/*   Updated: 2024/10/26 08:23:51 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_bzero() is a function that writes n zeroed bytes to the string s
 * 
 * erases the data in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros (bytes
	containing '\0') to that area
 * param void s This is the pointer to the memory area to be filled.
 * param size_t n The number of bytes to be set to zero.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
