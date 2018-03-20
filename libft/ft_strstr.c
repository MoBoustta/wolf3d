/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvinogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:20:33 by vvinogra          #+#    #+#             */
/*   Updated: 2017/10/28 15:20:33 by vvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	size_t	m;
	char	*big1;
	char	*big_re;

	big_re = (char *)big;
	if (ft_strlen(little) == 0)
		return (big_re);
	i = 0;
	while (big_re[i] && ft_strlen(big) >= ft_strlen(little))
	{
		j = 0;
		if (big_re[i] == little[j])
		{
			m = i;
			big1 = &big_re[i];
			while (little[j] && little[j++] == big_re[i++])
				if (little[j] == '\0')
					return (big1);
			i = m;
		}
		i++;
	}
	return (NULL);
}
