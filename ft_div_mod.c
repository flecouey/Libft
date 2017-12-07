/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:36:15 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/17 15:41:09 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		d;
	int		m;

	d = a / b;
	m = a % b;
	*div = d;
	*mod = m;
}
