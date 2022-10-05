arr = ['ft_isalpha.c','ft_isdigit.c','ft_isalnum.c','ft_isascii.c',
       'ft_isprint.c','ft_strlen.c','ft_memset.c','ft_bzero.c',
       'ft_memcpy.c','ft_memmove.c','ft_strlcpy.c','ft_strlcat.c',
       'ft_toupper.c','ft_tolower.c','ft_strchr.c','ft_strrchr.c','ft_strncmp.c',
       'ft_memchr.c','ft_memcmp.c','ft_strnstr.c','ft_atoi.c']

# for i in arr:
# 	with open(i, 'w') as f:
# 		header = f"""/* ************************************************************************** */
# /*                                                                            */
# /*                                                        :::      ::::::::   */
# /*   {i}                                       :+:      :+:    :+:   */
# /*                                                    +:+ +:+         +:+     */
# /*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
# /*                                                +#+#+#+#+#+   +#+           */
# /*   Created: 2022/09/28 19:59:07 by yelaissa          #+#    #+#             */
# /*   Updated: 2022/09/29 11:02:48 by yelaissa         ###   ########.fr       */
# /*                                                                            */
# /* ************************************************************************** */
# """
# 		f.write(header)

for i in arr:
       print(i+'/', end="")