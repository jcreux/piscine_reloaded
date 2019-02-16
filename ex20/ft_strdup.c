/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:32:25 by jcreux            #+#    #+#             */
/*   Updated: 2018/11/08 19:41:45 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	str = NULL;
	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		j = 0;
		while (j < i && src[j] != '\0')
		{
			str[j] = src[j];
			j++;
		}
		str[j] = '\0';
		return (str);
	}
}
