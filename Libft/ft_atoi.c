/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:39:33 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/02 16:25:19 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		counter;
	long	num;

	i = 0;
	counter = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == ' ')
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			counter = counter * -1;
		i ++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = (10 * num) + (str[i] - '0');
		if ((num * counter < -2147483648) || (num * counter > 2147483648))
			return ((num * counter < -2147483648) - 1);
		i ++;
	}
	return (num * counter);
}
