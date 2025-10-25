/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:30:31 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 20:56:12 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	size;

	size = ft_strlen(s) - 1;
	if (c == '\0')
		return (&s[size + 1]);
	while (0 <= size)
	{
		if (s[size] == (unsigned char)c)
			return (&s[size]);
		size--;
	}
	return (NULL);
}
