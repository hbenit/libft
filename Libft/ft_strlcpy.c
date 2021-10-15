/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:01:29 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/01 20:29:40 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	c = 0;
	while (src[c])
		c ++;
	if (!src)
		return (0);
	if (dstsize)
	{
		i = 0;
		while (src[i] && i < (dstsize - 1))
			*dst++ = src[i++];
		*dst = 0;
	}
	return (c);
}
