/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:58:33 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 20:45:57 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*array;

	if ((INT_MAX <= nmeb || INT_MAX <= size) && nmeb != 0 && size != 0)
		return (NULL);
	array = malloc(nmeb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmeb * size);
	return (array);
}
