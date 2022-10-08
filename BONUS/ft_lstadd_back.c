/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:12:44 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/07 12:36:55 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

void	printlist(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		printf("%d - ", (int)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}

// int	main()
// {
// 	t_list	*tmp;
// 	t_list	**lst;
// 	int		i;

// 	while (i < 5)
// 	{
// 		tmp = ft_lstnew(&i);
// 		ft_lstadd_front(lst, tmp);
// 		i++;
// 	}
// }
