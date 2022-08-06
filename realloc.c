/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:35:09 by mboukhal          #+#    #+#             */
/*   Updated: 2022/06/13 16:35:54 by mboukhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size)
{
	char	*tmp;
	int		i;
	char	*p;

	p = (char *) ptr;
	tmp = malloc(size);
	if (!tmp)
		return (NULL);
	i = -1;
	while (p[++i])
		tmp[i] = p[i];
	tmp[i] = p[i];
	free(p);
	return (tmp);
}
