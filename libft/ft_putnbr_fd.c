/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:03:44 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/24 16:39:34 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	justput(int fd, long long num, int flag, int *count)
{
	char	result[2];

	if (flag)
		write(fd, "-", 1);
	flag = 0;
	result[0] = '0' + num % 10;
	num = num / 10;
	*count += 1;
	if (0 < num)
		justput(fd, num, flag, count);
	write(fd, result, 1);
}

static int	ft_putint(long long num, int fd)
{
	int		flag;
	int		count;

	flag = 0;
	count = 0;
	if (num < 0)
	{
		flag = 1;
		num *= -1;
		count++;
	}
	justput(fd, num, flag, &count);
	return (count);
}

int	ft_putnbr_fd(long long n, int fd)
{
	return (ft_putint(n, fd));
}
