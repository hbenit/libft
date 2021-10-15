/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenito- <hbenito-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:17:50 by hbenito-          #+#    #+#             */
/*   Updated: 2021/09/28 11:42:47 by hbenito-         ###   ########.getxo    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*endlst;

	if (!f || !del)
		return (NULL);
	endlst = NULL;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			ft_lstclear(&endlst, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&endlst, newlst);
			lst = lst->next;
		}
	}
	return (endlst);
}
