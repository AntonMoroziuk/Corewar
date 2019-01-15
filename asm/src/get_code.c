/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_code.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoroziu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 13:28:29 by amoroziu          #+#    #+#             */
/*   Updated: 2019/01/13 13:28:31 by amoroziu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

static int	other_functions(t_asm *champ, t_asm **cur)
{
	if (ft_strequ((*cur)->value, "zjmp"))
		return (zjmp(champ, cur));
	if (ft_strequ((*cur)->value, "ldi"))
		return (ldi(champ, cur));
	if (ft_strequ((*cur)->value, "sti"))
		return (sti(champ, cur));
	if (ft_strequ((*cur)->value, "fork"))
		return (fork(champ, cur));
	if (ft_strequ((*cur)->value, "lld"))
		return (lld(champ, cur));
	if (ft_strequ((*cur)->value, "lldi"))
		return (lldi(champ, cur));
	if (ft_strequ((*cur)->value, "lfork"))
		return (lfork(champ, cur));
	if (ft_strequ((*cur)->value, "aff"))
		return (aff(champ, cur));
}

static int	get_instruction(t_asm *champ, t_asm **cur)
{
	if (ft_strequ((*cur)->value, "live"))
		return (live(champ, cur));
	if (ft_strequ((*cur)->value, "ld"))
		return (ld(champ, cur));
	if (ft_strequ((*cur)->value, "st"))
		return (st(champ, cur));
	if (ft_strequ((*cur)->value, "add"))
		return (add(champ, cur));
	if (ft_strequ((*cur)->value, "sub"))
		return (sub(champ, cur));
	if (ft_strequ((*cur)->value, "and"))
		return (and(champ, cur));
	if (ft_strequ((*cur)->value, "or"))
		return (or(champ, cur));
	if (ft_strequ((*cur)->value, "xor"))
		return (xor(champ, cur));
	return (other_functions(champ, cur));
}

void		add_to_code(t_asm *champ, char *new_code)
{
	char	*temp;

	if (!champ->code)
		champ->code = new_code;
	else
	{
		temp = champ->code;
		champ->code = ft_strjoin(champ->code, new_code);
		ft_strdel(&temp);
		ft_strdel(&new_code);
	}
}

int			get_code(t_asm *champ)
{
	t_token	*cur;

	//prepare_labels(champ);
	cur = champ->tokens;
	while (cur)
	{
		if (cur->type == INSTRUCTION)
			if (!get_instruction(champ, &cur))
				return (0);
		if (cur->type == LABEL)
		{
			add_label(champ, cur);
			cur = cur->next;
		}
		else
			return (err_mesg(INVALID_INSTRUCTION, cur->line))
	}
	return (1);
}