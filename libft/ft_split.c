/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:00:50 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 12:20:58 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *str, char c)
{
	int	flag;
	int	count;
	int	i;

	i = 0;
	flag = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] != c && flag == 0)
			flag = 1;
		if (str[i] == c)
		{
			if (flag == 1)
				count++;
			flag = 0;
		}
		i++;
	}
	return (count + flag);
}

static const char	*ft_strstr(const char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (&str[i]);
}

static char	*justdup(const char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**just_free(char **result, int j)
{
	while (0 <= j)
	{
		free(result[j]);
		j--;
	}
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		len;
	int		j;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i] == c && s[0] != '\0')
		i++;
	while (s[i] && s[0] != '\0')
	{
		len = ft_strstr(&s[i], c) - &s[i];
		result[j] = justdup(&s[i], len);
		if (result[j] == NULL)
			return (just_free(result, j));
		while (s[i + len] && s[i + len] == c)
			i++;
		i += len;
		j++;
	}
	result[j] = NULL;
	return (result);
}
