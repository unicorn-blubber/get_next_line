/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_nws_ind.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbaldwin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 11:06:53 by pbaldwin          #+#    #+#             */
/*   Updated: 2016/12/15 11:06:54 by pbaldwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_first_nws_ind(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = -1;
	while (ft_isws(str[++i]) && str[i])
		;
	return (i);
}