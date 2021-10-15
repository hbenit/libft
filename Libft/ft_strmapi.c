/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:48:46 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/08 20:32:22 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mem;
	unsigned int	i;

	i = -1;
	if (!s)
		return (NULL);
	mem = ft_strdup(s);
	if (!mem)
		return (NULL);
	while (s[++i])
		mem[i] = f(i, s[i]);
	mem[i] = '\0';
	return (mem);
}
