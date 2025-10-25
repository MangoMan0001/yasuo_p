/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:19:01 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 20:57:11 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	serch_head(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			return (i);
		j = 0;
		i++;
	}
	return (-1);
}

static int	serch_tale(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (0 < i)
	{
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			return (i);
		j = 0;
		i--;
	}
	return (i);
}

static void	just_trim(char *dest, const char *src, int head, int tale)
{
	int	i;

	i = 0;
	while (head <= tale)
	{
		dest[i] = src[head];
		i++;
		head++;
	}
	dest[i] = '\0';
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*array;
	int		head;
	int		tale;
	int		len;

	head = serch_head(s1, set);
	if (head == -1 || !ft_memcmp(s1, "", 1))
		return (ft_strdup(""));
	tale = serch_tale(s1, set);
	len = tale - head + 2;
	array = (char *)malloc(sizeof(char) * len);
	if (array == 0)
		return (NULL);
	just_trim(array, s1, head, tale);
	return (array);
}
