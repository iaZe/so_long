/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:47:59 by dantavar          #+#    #+#             */
/*   Updated: 2022/07/14 00:01:57 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	texture_load(t_game *game, t_img **img, char *path)
{
	int				width;
	int				height;

	*img = mlx_xpm_file_to_image(game->mlx.mlx, path, &width, &height);
	if (*img == 0)
		ft_putendl_fd("Error\nCan't load texture", 2);
	(*img)->width = width;
	(*img)->height = height;
}

void	texture_init(t_game *game)
{
	texture_load(game, &game->player, "./texture/pf.xpm");
	texture_load(game, &game->exit, "./texture/exit.xpm");
	texture_load(game, &game->collectible, "./texture/collectable.xpm");
	texture_load(game, &game->tree, "./texture/ground.xpm");
	texture_load(game, &game->ground, "./texture/wall.xpm");
}

unsigned int	mlx_get_pixel(t_img *img, int x, int y)
{
	return (*(unsigned int *)
		(img->data + (x * img->bpp / 8 + y * img->size_line)));
}

void	mlx_draw_pixel(t_img *mlx_img, int x, int y, int color)
{
	char			*target;

	target = mlx_img->data + (x * mlx_img->bpp / 8 + y * mlx_img->size_line);
	*(unsigned int *)target = color;
}

unsigned int	mlx_rgb_to_int(int o, int r, int g, int b)
{
	return (o << 24 | r << 16 | g << 8 | b);
}
