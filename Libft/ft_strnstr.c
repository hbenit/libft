/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:34:49 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/01 20:19:03 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (*needle == 0)
		return ((char *)haystack);
	a = 0;
	while (haystack[a] && a < len)
	{
		b = 0;
		if (needle[0] == haystack[a])
		{
			while (needle[b] == haystack[a + b] && (a + b) < len)
			{
				if (needle[b + 1] == '\0')
					return ((char *)haystack + a);
				b ++;
			}
		}
		a ++;
	}
	return (NULL);
}
