/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:21 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/06 11:52:36 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	void	*s;
	char	*str;

	str = "1337";
	// s = str;
	s = NULL;
	// s = "123";
	*(char *)s = "med";
	printf("%p", s);
}
