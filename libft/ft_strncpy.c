/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssettle <ssettle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:06:31 by ssettle           #+#    #+#             */
/*   Updated: 2019/03/01 14:26:24 by ssettle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	while (i < n)
		s1[i++] = '\0';
	return (s1);
}
