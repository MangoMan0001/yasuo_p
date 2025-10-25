/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put0X_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:58:36 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/24 18:29:28 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	just_do(unsigned long long n, int fd, int	*count)
{
	char				*list;
	unsigned long long	num;

	list = "0123456789ABCDEF";
	num = n;
	num /= 16;
	*count += 1;
	if (0 < num)
		just_do(num, fd, count);
	ft_putchar_fd(list[n % 16], fd);
}

int	ft_put0xx_fd(unsigned long long n, int fd)
{
	int	count;

	count = 0;
	just_do(n, fd, &count);
	return (count);
}
