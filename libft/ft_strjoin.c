/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:59:16 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 17:49:23 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*array;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	array = (char *)malloc(sizeof(char) * len + 1);
	if (array == NULL)
		return (NULL);
	ft_strlcpy(array, s1, ft_strlen(s1) + 1);
	ft_strlcat(array, s2, len + 1);
	return (array);
}
