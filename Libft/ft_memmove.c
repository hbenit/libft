/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:33:41 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/05 20:28:50 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		ft_memcpy(dst, src, len);
	else
		while (++ i < len)
			((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
