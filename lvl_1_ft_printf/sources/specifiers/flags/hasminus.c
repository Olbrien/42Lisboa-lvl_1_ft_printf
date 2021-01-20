/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hasminus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 07:30:28 by tisantos          #+#    #+#             */
/*   Updated: 2021/01/16 07:31:42 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

void	hasminus(p_list *plist, s_list *slist)
{
	int i;
	char *format;
	char *temp;
	char *numbers = "0123456789";

	plist->format_count++;
	i = plist->format_count;
	format = plist->format;

	if (!(temp = malloc(sizeof(char) + 2)))
		return ;
	temp[0] = 0;
	temp[1] = '\0';

	if (format[i] != '\0' && ft_strchr(numbers, format[i]))
	{
		while(format[i] != '\0' && ft_strchr(numbers, format[i]))
		{
			temp = ft_strjoinchr(temp, format[i]);
			i++;
		}
		slist->minus = ft_atoi(temp);
	}
	slist->width = 0;
	plist->format_count = i - 1;
}