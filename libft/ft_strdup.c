/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusoares <rusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:12:19 by codespace         #+#    #+#             */
/*   Updated: 2023/11/06 18:21:18 by rusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dup)
	{
		return (NULL);
	}
	while (*s)
	{
		dup[i++] = *s++;
	}
	dup[i] = '\0';
	return (dup);
}