/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:35:25 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 17:41:40 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	current = lst;
	result = ft_lstnew(f(current->content));
	if (!result)
		return (NULL);
	current = current->next;
	while (current)
	{
		ft_lstadd_back(&result, ft_lstnew(f(current->content)));
		if (!result)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		current = current->next;
	}
	return (result);
}
