/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 02:44:47 by aalemami          #+#    #+#             */
/*   Updated: 2026/04/22 02:45:44 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
		i++;
	return (i);
}

char	**ft_arr_push(char **arr, char *str)
{
	char	**new_arr;
	char	*new_str;
	int		i;

	if (!str)
		return (arr);
	new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	new_arr = malloc(sizeof(char*) * (get_size(arr) + 2));
	if (!new_arr)
	{
		free(new_str);
		return (NULL);
	}
		i = 0;
	while (arr && arr[i])
	{
		new_arr[i] = arr[i];
		i++;
	}
	new_arr[i] = new_str;
	new_arr[++i] = NULL;
	return (new_arr);
}
