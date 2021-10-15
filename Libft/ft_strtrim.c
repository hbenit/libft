/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:42:28 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/20 16:07:10 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	finish;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && (char)ft_strchr(set, s1[start]))
		start ++;
	finish = ft_strlen(s1);
	while (finish && finish > start && (char)ft_strchr(set, s1[finish]))
		finish --;
	return (ft_substr(s1 + start, 0, finish + 1 - start));
}
