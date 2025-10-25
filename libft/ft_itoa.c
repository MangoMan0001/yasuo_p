/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:07:17 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 12:17:57 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnum(long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static void	ft_itra(char *result, long num, int flag, int count)
{
	if (flag)
		result[-1] = '-';
	flag = 0;
	result[count] = '0' + num % 10;
	num = num / 10;
	if (0 < num)
		ft_itra(result, num, flag, count - 1);
}

char	*ft_itoa(int n)
{
	long	num;
	int		flag;
	int		count;
	char	*result;

	flag = 0;
	num = n;
	if (num < 0)
	{
		flag = 1;
		num *= -1;
	}
	count = ft_countnum(num);
	result = (char *)malloc(sizeof(char) * count + flag + 1);
	if (result == NULL)
		return (NULL);
	ft_itra(&result[flag], num, flag, count - 1);
	result[count + flag] = '\0';
	return (result);
}
