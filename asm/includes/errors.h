/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoroziu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:56:16 by amoroziu          #+#    #+#             */
/*   Updated: 2019/01/10 11:56:17 by amoroziu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H
# define NO_NAME 0
# define NO_COMMENT 1
# define NO_NAME_AND_NO_COMMENT 2
# define INCORRECT_FIRST_LINE 3
# define UNKNOWN_CHARACTER 4
# define TOO_LONG_CHAMPION_NAME 5
# define TOO_LONG_COMMENT 6
# define BAD_CHARACTER_IN_LABEL 7
# define BAD_CHARACTER_IN_DIRECT_VALUE 8
# define LABEL_DOES_NOT_EXIST 9
# define DUPLICATE_VALUE 10
# define BAD_CHARACTER_IN_INDIRECT_VALUE 11
# define BAD_CHARACTER_IN_REGISTER 12
# define BAD_REGISTER_IDX 13
# define NEXT_TOKEN_MUST_BE_DIRECT 14
# define ONLY_ONE_INSTRUCTION 15
# define INVALID_INSTRUCTION 16
# define NEXT_TOKEN_MUST_BE_DIR_OR_IN 17
# define NEXT_TOKEN_MUST_BE_REGISTER 18
# define SEPARATOR_IS_MISSING 19
# define ARGUMENT_IS_MISSING 20
# define NEXT_TOKEN_MUST_BE_DIR_OR_REG 21

int		err_mesg(int err_code, int line);

#endif