/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabmart2 <pabmart2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:23:00 by pabmart2          #+#    #+#             */
/*   Updated: 2024/11/21 18:31:10 by pabmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if a character is a whitespace character.
 *
 * This function determines if the given character is a whitespace character.
 * Whitespace characters include space (' '), horizontal tab ('\t'),
 * vertical tab ('\v'), newline ('\n'), carriage return ('\r'),
 * and form feed ('\f').
 *
 * @param c The character to check.
 * @return 1 if the character is a whitespace character, 0 otherwise.
 */
static int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		output;
	char	negative;

	output = 0;
	negative = 1;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-')
	{
		negative = -1;
		++nptr;
	}
	else if (*nptr == '+')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		output = output * 10 + *nptr - '0';
		++nptr;
	}
	return (output * negative);
}
