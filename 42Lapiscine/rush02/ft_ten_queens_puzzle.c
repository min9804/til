/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mher <mher@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:55:20 by mher              #+#    #+#             */
/*   Updated: 2021/09/20 15:36:22 by mher             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_position(int *board, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (board[i] == board[x])
			return (0);
		if (board[i] > board[x])
		{
			if (x - i == board[i] - board[x])
				return (0);
		}
		else
		{
			if (x - i == board[x] - board[i])
				return (0);
		}
		++i;
	}
	return (1);
}

void	put_queens_board(int *board, int *count, int x)
{
	int		i;
	char	tmp;

	i = 0;
	if (x < 10)
	{
		while (i < 10)
		{
			board[x] = i;
			if (is_valid_position(board, x))
				put_queens_board(board, count, x + 1);
			++i;
		}
	}
	else
	{
		*count += 1;
		while (i < 10)
		{
			tmp = board[i] + '0';
			write(1, &tmp, 1);
			++i;
		}
		write(1, "\n", 1);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	put_queens_board(board, &count, 0);
	return (count);
}
