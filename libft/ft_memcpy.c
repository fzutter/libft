/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:09:50 by fzutter           #+#    #+#             */
/*   Updated: 2023/10/31 16:15:58 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i < (int) n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
