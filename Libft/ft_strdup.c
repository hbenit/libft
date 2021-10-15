/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:54:19 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/02 20:21:54 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*mem;

	i = ft_strlen(s1);
	mem = (char *)malloc(i + 1);
	if (mem == NULL)
		return (NULL);
	return (ft_memcpy(mem, s1, i + 1));
}
