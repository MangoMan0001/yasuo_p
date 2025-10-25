/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:46:15 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/21 16:14:21 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	if (dest == NULL || src == NULL)
		return (0);
	s = ft_strlen(dest);
	if (s >= size)
		return (ft_strlen(src) + size);
	while (src[i] && s + i < size - 1)
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[s + i] = '\0';
	return (s + ft_strlen(src));
}
