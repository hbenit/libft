/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:02:51 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/01 20:28:40 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	d;

	d = -1;
	while (++d < n)
		if (((unsigned char *)s)[d] == (unsigned char)c)
			return ((void *)(s + d));
	return (NULL);
}
