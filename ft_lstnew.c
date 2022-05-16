/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:49:41 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:50:48 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Create a new element for the list, to continue the
    end of the list. Returns a new node for the list. 
	Creates memory for each new item. */

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	if (content == NULL)
		newnode->content = NULL;
	else
		newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
