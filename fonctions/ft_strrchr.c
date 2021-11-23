/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:41:53 by ajung             #+#    #+#             */
/*   Updated: 2021/11/23 11:41:55 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*output;

	i = 0;
	output = NULL;
	while (s[i])
	{
		if (s[i] == c)
			output = (char *)(&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)(&s[i]));
	return (output);
}
