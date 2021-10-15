/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:32:46 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/09 22:53:09 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	if (!s)
		return ;
	while (s[++i])
		(*f)(i, s + i);
}
