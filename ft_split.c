/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:23:28 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:40:21 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numofstr(char const *s, char c)
{
	int	i;
	int	numofstr;

	i = 0;
	numofstr = 0;
	if (s == 0 || s[0] == '\0')
		return (0);
	while (s[i] != 0)
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			numofstr++;
		i++;
	}
	return (numofstr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	arr = malloc(sizeof(char *) * (ft_numofstr(s, c) + 1));
	if (!arr || !s)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
		{
			arr[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	arr[j] = 0;
	return (arr);
}
