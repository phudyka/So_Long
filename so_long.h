/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:20:04 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/16 11:07:36 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define WIDTH	1280
# define HEIGHT	480

# define MLX_SYNC_IMAGE_WRITABLE	1
# define MLX_SYNC_WIN_FLUSH_CMD		2
# define MLX_SYNC_WIN_CMD_COMPLETED	3

typedef struct	s_axes
{
	int	x;
	int	y;
} 				t_axes;

typedef struct	s_init
{
	void	*mlx;
	void	*window;
	void	*img;
	int		bpp;
	int		lenght;
	int		endian;
	char	*address;
}				t_init;


typedef struct s_engine
{
	int		**map;
	int		player;
	int		moves;
}				t_engine;



# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <mlx.h>
# include "libft.h"

#endif