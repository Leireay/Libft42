/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:47:08 by larellan          #+#    #+#             */
/*   Updated: 2024/10/26 08:49:06 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *If c is a uppercase letter,returns its lowercase equivalent.
 *Otherwise, it returns c.
 *param int v The character to be converted.
 *return The lowercase version of the character.
 */
int	ft_tolower(int c) //carácter pasado como argumento
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
