/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 14:52:12 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/20 14:52:16 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
	{
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (match(s1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (match(s1 + 1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (0);
}
