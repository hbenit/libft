/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:26:03 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/05 21:22:48 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	char			*mem;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (star > ft_strlen(s))
		return (ft_strdup(""));
	i = -1;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	mem = (char *)malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	while (++i < len)
		mem[i] = s[star + i];
	mem[len] = '\0';
	return (mem);
}
