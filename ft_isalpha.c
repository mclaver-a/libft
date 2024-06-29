/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclaver- <mclaver-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:47:36 by mclaver-          #+#    #+#             */
/*   Updated: 2024/01/20 18:44:20 by mclaver-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('A' <= c) && (c <= 'Z'))
		return (1);
	else if (('a' <= c) && (c <= 'z'))
		return (1);
	return (0);
}
