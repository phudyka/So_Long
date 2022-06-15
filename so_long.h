/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:16:00 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/15 17:57:06 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define HEIGHT 720
# define WIDTH  480
# define GL_SILENCE_DEPRECATION

typedef struct s_init
{
    void    *mlx;
    void    *window;
}               t_init;


# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <errno.h>
# include <string.h>
# include <math.h>
# include "mlx.h"

#endif