/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancrodri <ancrodri@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:06:53 by ancrodri          #+#    #+#             */
/*   Updated: 2025/07/01 17:55:27 by ancrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) ft_abs(Value)

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

#endif
