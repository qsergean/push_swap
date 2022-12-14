/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsergean <qsergean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:47:36 by qsergean          #+#    #+#             */
/*   Updated: 2022/03/11 21:39:16 by qsergean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int))
{
	t_list	*new;
	t_list	*res;

	res = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL && res != NULL)
			ft_lstclear(&res);
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	ft_lstclear(&lst);
	return (res);
}
