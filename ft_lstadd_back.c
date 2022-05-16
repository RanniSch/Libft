/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:48:41 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:51:28 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* First checking if list exists. Then checking for the 
last item and adding a new item behind the last. Else check 
if the list is empty. If so: creating the first item. */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastitem;

	if (!lst)
		return ;
	if (*lst)
	{
		lastitem = ft_lstlast(*lst);
		lastitem->next = new;
	}
	else
		*lst = new;
}
