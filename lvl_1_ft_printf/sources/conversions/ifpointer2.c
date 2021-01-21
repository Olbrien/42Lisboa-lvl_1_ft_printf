/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifpointer2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 05:38:33 by tisantos          #+#    #+#             */
/*   Updated: 2021/01/17 06:00:56 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int		pointer_write_minus_greater(p_list *plist, s_list *slist, int i, int length)
{
	int count;

	count = i + length;
	if (length >= slist->minus)
	{
		slist->minus = 0;
		return(0);
	}
	else if (length < slist->minus)
	{
		while (count < slist->minus)
		{
			write(1, " ", 1);
			plist->final_format_lenght++;
			count++;
		}
	}
	slist->minus = 0;
	return(i);
}

int		pointer_write_width_greater(p_list *plist, s_list *slist, int i, int length)
{
	int count;

	count = i + length;
	if (length >= slist->width)
	{
		slist->width = 0;
		return(0);
	}
	else if (length < slist->width)
	{
		while (count < slist->width)
		{
			write(1, " ", 1);
			plist->final_format_lenght++;
			count++;
		}
	}
	slist->width = 0;
	return(i);
}


void	pointer_write(p_list *plist, char *string, s_list *slist)
{
	int i;
	int length;

	i = 0;
	if (!plist || !string)
		return ;
	length = ft_strlen(string);
	//if (slist->zero > length)
		//string = write_if_zeros_string(plist, slist, string);
	if (slist->width > 0 && slist->minus == 0)
		i = pointer_write_width_greater(plist, slist, i, length);
	write(1, string, length);
	if (slist->minus > 0)
		i = pointer_write_minus_greater(plist, slist, i, length);
	if (plist->final_format == NULL)
		plist->final_format = ft_strdup(string);
	else
		plist->final_format = ft_strjoin(plist->final_format, string);
	plist->final_format_lenght += length;
}
