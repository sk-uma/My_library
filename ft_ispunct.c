/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugita <tsugita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:22:43 by tsugita           #+#    #+#             */
/*   Updated: 2021/03/11 20:22:43 by tsugita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	return (('!' <= c && c <= '/') || (':' <= c && c <= '@') || \
			('[' <= c && c <= '`') || ('{' <= c && c <= '}'));
}