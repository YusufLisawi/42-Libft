/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:56:19 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/09 20:19:03 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	if (lst)
	{
		tmp = *lst;
		while (tmp != NULL)
		{
			tmp = (*lst)->next;
			ft_lstdelone((*lst), del);
			(*lst) = tmp;
		}
	}
	*lst = NULL;
}
