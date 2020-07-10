/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahlatyw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:50:04 by mahlatyw          #+#    #+#             */
/*   Updated: 2020/07/10 11:57:03 by mahlatyw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar (char c)
{
	write (1,&c,1)
}
void ft_print_reverse_alphabet (void)
{
	char c
	c='z'
	while(c>='a'){
		ft_putchar (c--)
}
