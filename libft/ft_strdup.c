/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:46:11 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/19 20:49:40 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;

	array = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (array == 0)
		return (0);
	ft_strlcpy(array, s, ft_strlen(s) + 1);
	return (array);
}
