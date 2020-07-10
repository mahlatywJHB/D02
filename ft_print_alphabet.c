/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahlatyw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:34:37 by mahlatyw          #+#    #+#             */
/*   Updated: 2020/07/10 11:38:02 by mahlatyw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar (char c)
{
	write (1,&c,1);
}
void ft_print_alphabet (void)
{
	char c
	c='a'
	while (c<='z'){
			ft_putchar (c++);
}
