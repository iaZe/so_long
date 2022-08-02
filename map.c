/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:41:46 by dantavar          #+#    #+#             */
/*   Updated: 2022/07/11 21:09:03 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_square(t_game *game, t_img *img, int x, int y)
{
	unsigned int	color;
	int				i;
	int				j;

	j = 0;
	while (j < 40)
	{
		i = 0;
		while (i < 40)
		{
			color = mlx_get_pixel(img, i, j);
			if (color != mlx_rgb_to_int(0, 255, 255, 255))
				mlx_draw_pixel(game->mlx.mlx_img, x + i, y + j, color);
			i++;
		}
		j++;
	}
}

void	check_for_elements(t_game *game, int x, int y, int z)
{
	if (game->map[z + game->numb] == 'P')
		draw_square(game, game->player, x, y * 39);
	if (game->map[z + game->numb] == 'C')
		draw_square(game, game->collectible, x, y * 39);
	if (game->map[z + game->numb] == 'E' || game->map[z + game->numb] == 'X')
		draw_square(game, game->exit, x, y * 39);
}

void	draw_map(t_game *game)
{
	int	z;

	game->numb = 0;
	game->y = 0;
	game->x = -40;
	while (game->y < (game->line_number))
	{
		z = 0;
		while (z < game->total_line_char)
		{
			if (game->map[z + game->numb] == '0')
				draw_square(game, game->tree, game->x += 40, game->y * 39);
			else
			{
				draw_square(game, game->ground, game->x += 40, game->y * 39);
				check_for_elements(game, game->x, game->y, z);
			}
			z++;
		}
		game->y++;
		game->numb = game->total_line_char * game->y;
	}
	mlx_put_image_to_window(game->mlx.mlx, game->mlx.mlx_win,
		game->mlx.mlx_img, 0, 0);
}
