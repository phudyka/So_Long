/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:42:44 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/15 17:43:05 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
    t_init  init;

    init.mlx = mlx_init();
	init.window = mlx_new_window(init.mlx, HEIGHT, WIDTH, "so_long");
	mlx_loop(init.mlx);
    return (0);
}
