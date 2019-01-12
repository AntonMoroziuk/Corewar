/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoroziu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 15:59:28 by amoroziu          #+#    #+#             */
/*   Updated: 2019/01/09 15:59:30 by amoroziu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

void		compile(char **code, char *filename)
{
	t_asm	champ;

	champ.tokens = NULL;
	if (!get_tokens(code, &champ))
		return ;
}