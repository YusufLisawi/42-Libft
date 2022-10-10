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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	curr = *lst;
	while (curr != NULL)
	{
		*lst = curr->next;
		del(curr->content);
		free(curr);
		curr = *lst;
	}
}
