/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:46:52 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/07 19:58:56 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*mem;
	size_t			len;
	size_t			i;
	size_t			j;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	mem = (char *)malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	while (s1[++i])
		mem[i] = s1[i];
	while (s2[++j])
		mem[i ++] = s2[j];
	mem[i] = '\0';
	return (mem);
}
