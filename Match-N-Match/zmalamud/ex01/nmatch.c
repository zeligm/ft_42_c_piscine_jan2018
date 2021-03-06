/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:56:55 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/21 11:56:57 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
	{
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (nmatch(s1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (nmatch(s1 + 1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (0);
}
