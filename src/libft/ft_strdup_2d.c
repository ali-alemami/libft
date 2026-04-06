/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:05:30 by aalemami          #+#    #+#             */
/*   Updated: 2026/04/06 12:12:07 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(const char **str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	**ft_strdup_2d(const char **str)
{
	char	**new_str;
	int		i;

	new_str = malloc(sizeof(char *) * (get_size(str) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = ft_strdup(str[i]);
		if (!new_str[i])
			free_split(new_str);
		i++;
	}
	new_str[i] = NULL;
	return (new_str);
}
