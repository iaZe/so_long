/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:43:11 by dantavar          #+#    #+#             */
/*   Updated: 2022/07/12 02:13:08 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_bottom(t_game *game)
{
	char	*ptr;
	int		i;

	ptr = strchr(game->map, 'P');
	i = -1;
	while (++i < game->total_line_char)
		++ptr;
	if (*ptr != '1' && *ptr != 'E')
	{
		*ptr = 'P';
		ptr = ft_strchr(game->map, 'P');
		*ptr = '0';
		game->numb_move += 1;
		ft_putnbr_fd(game->numb_move, 1);
		ft_putchar_fd('\n', 1);
	}
	mlx_destroy_image(game->mlx.mlx, game->player);
	texture_load(game, &game->player, "./texture/pf.xpm");
}

void	move_up(t_game *game)
{
	char	*ptr;
	int		i;

	i = -1;
	ptr = ft_strchr(game->map, 'P');
	while (++i < game->total_line_char)
		--ptr;
	if (*ptr != '1' && *ptr != 'E')
	{
		*ptr = 'P';
		while (--i >= 0)
			++ptr;
		*ptr = '0';
		game->numb_move += 1;
		ft_putnbr_fd(game->numb_move, 1);
		ft_putchar_fd('\n', 1);
	}
	mlx_destroy_image(game->mlx.mlx, game->player);
	texture_load(game, &game->player, "./texture/pb.xpm");
}

void	move_right(t_game *game)
{
	char	*ptr;

	ptr = ft_strchr(game->map, 'P');
	if ((*++ptr != '1' && *ptr != 'E'))
	{
		*--ptr = '0';
		*++ptr = 'P';
		game->numb_move += 1;
		ft_putnbr_fd(game->numb_move, 1);
		ft_putchar_fd('\n', 1);
	}
	mlx_destroy_image(game->mlx.mlx, game->player);
	texture_load(game, &game->player, "./texture/pr.xpm");
}

void	move_left(t_game *game)
{
	char	*ptr;

	ptr = ft_strchr(game->map, 'P');
	if (*--ptr != '1' && *ptr != 'E')
	{
		*++ptr = '0';
		*--ptr = 'P';
		game->numb_move += 1;
		ft_putnbr_fd(game->numb_move, 1);
		ft_putchar_fd('\n', 1);
	}
	mlx_destroy_image(game->mlx.mlx, game->player);
	texture_load(game, &game->player, "./texture/pl.xpm");
}
