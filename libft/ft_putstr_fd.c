/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:52:27 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/24 21:09:39 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(const char *s, int fd)
{
	size_t	size;

	size = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	while (s[size])
	{
		if (ft_putchar_fd(s[size], fd) == -1)
			return (-1);
		size++;
	}
	return (size);
}
