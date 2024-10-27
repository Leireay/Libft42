/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:59:06 by larellan          #+#    #+#             */
/*   Updated: 2024/10/27 14:59:50 by larellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"
void ft_memmove(void *dest, const char *src, size_t n)
{
        size_t  i;

        if (!dest && !src)
                return (0);
        i = 0;
        if ((size_t)dest - (size_t)src < n)
        {
                i = n - 1;
                while (i < n)
                {
                        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
                        i++;
                }
        }
        else
        {
                while (i < n)
                {
                        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
                        i++;
                }
        }
        return (dest);

