/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:04:52 by aalemami          #+#    #+#             */
/*   Updated: 2026/03/30 18:05:51 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_string_array(char **str)
{
	char	**tmp;

	tmp = str;
	while (*str)
		free(*str++);
	free(tmp);
}
