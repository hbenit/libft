/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:09:31 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/07 18:38:54 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	minus_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*memint;
	int		len;

	len = num_len(n);
	memint = malloc(sizeof(char) * (len + 1));
	if (memint == NULL)
		return (NULL);
	memint[len] = '\0';
	if (n < 0)
		memint[0] = '-';
	else if (n == 0)
		memint[0] = '0';
	while (n != 0)
	{
		--len;
		memint[len] = minus_value(n % 10) + '0';
		n = n / 10;
	}
	return (memint);
}
