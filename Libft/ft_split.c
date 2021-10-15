/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:25:37 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/28 10:54:20 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_counter(const char *s, char c)
{
	int	i;
	int	rows;

	i = -1;
	rows = 0;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			rows ++;
	return (rows);
}

static int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] == c && s[i] != '\0')
		i ++;
	while (s[i] != '\0' && s[i] != c)
	{
		len ++;
		i ++;
	}
	return (len);
}

static char	**ft_freemem(char const **dst, int j)
{
	while (j-- > 0)
		free((void *)dst[j]);
	free(dst);
	return (NULL);
}

static char	**ft_fill(char const *s, char **dst, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		k = 0;
		while (s[i] == c)
			i ++;
		dst[j] = (char *)malloc(sizeof(char) * ft_word_len(s, c, i) + 1);
		if (dst[j] == NULL)
			return (ft_freemem((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j ++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_words_counter(s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (dst == NULL)
		return (NULL);
	return (ft_fill(s, dst, c, len));
}
