/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:50:58 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/24 21:09:30 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr_fd(void *p, int fd)
{
	int	count;

	count = 0;
	if (p == NULL)
		return (ft_putstr_fd("(nil)", 1));
	count += ft_putstr_fd("0x", fd);
	count += ft_put0x_fd((unsigned long long)p, fd);
	return (count);
}
