/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:42:44 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/17 16:47:44 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_close(int caps, t_init *close)
{
    mlx_destroy_image(close->mlx, close->img);
    mlx_destroy_window(close->mlx, close->window);
    return (0);
}

void    ft_pixput(t_init *data, int x, int y, int color)
{
    char    *dst;
    dst = data->address + (y * data->lenght + x * (data->bpp / 8));
    *(unsigned int*)dst = color;
}

int main(void)
{
    t_init  init;

    init.mlx = mlx_init();
	init.window = mlx_new_window(init.mlx, WIDTH, HEIGHT, "so_long");
	init.img = mlx_new_image(init.mlx, WIDTH, HEIGHT);
    init.address = mlx_get_data_addr(init.img, &init.bpp, &init.lenght, &init.endian);
    mlx_loop(init.mlx);
    mlx_key_hook(init.mlx, ft_close, &init);
    return (0);
}