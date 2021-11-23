/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:43:29 by ajung             #+#    #+#             */
/*   Updated: 2021/11/23 12:07:20 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	//if (size == 0)
		//return (j);
	if (size <= i)
		return (size + j);
	else
		j = j + i;
	k = 0;
	while (src[k] && i + 1 < size)
		dest[i++] = src[k++];
	dest[i] = '\0';
	return (j);
}
