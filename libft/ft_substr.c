/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:48:55 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 19:34:10 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len <= 0)
		return (ft_strdup(""));
	size = ft_strlen(&s[start]);
	if (len <= size)
		size = len;
	array = (char *)malloc(sizeof(char) * size + 1);
	if (array == NULL)
		return (NULL);
	if (len == 0)
		return (array);
	ft_strlcpy(array, &s[start], size + 1);
	return (array);
}
